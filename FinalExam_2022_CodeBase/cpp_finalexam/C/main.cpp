#include <iostream>

/***** Implement the operation operate_on_any_type HERE *****/


#include "writable_list.h"
using namespace std;

template <typename T> void operate_on_any_type(T s1, T s2){
    cout << "First item is: " << s1
         << " Second item is: " << s2
         << endl;
    
    T sumOfTwo = s1 + s2;
    T smaller = min(s1, s2);
    T bigger = max(s1, s2);
    cout << "The sum of " << s1 << " + " << s2 <<" is : " << sumOfTwo << endl;
    cout << bigger << " is larger than " << smaller << endl;
    cout << endl;
}


NumericData make_data(int id, int p, double a){
    NumericData nd;
    nd.id = id;
    nd.place = p;
    nd.amount = a;
    return nd;
}

int main(){
    cout << "\nTESTING OPERATE ON ANY TYPE\n" << endl;
    string str1 = "first";
    string str2 = "second";
    operate_on_any_type(str1, str2);
    // string str3 = "Abcd";
    // string str4 = "dcbA";
    // int num1 = 120;
    // int num2 = 6;
    // operate_on_any_type(str3, str4);
    // operate_on_any_type(num1, num2);

    cout << endl;
    cout << "\nTESTING LABELLED LIST\n" << endl;
    LabelledList ll;
    ll.print_list();
    ll.add("John", make_data(34, 5, 11.1));
    ll.print_list();
    cout << endl;
    ll.add("Sandra", make_data(44, 7, 22.2));
    ll.add("Johanna", make_data(54, 9, 33.3));
    ll.print_list();
    cout << endl;
    ll.add("Eva", make_data(64, 11, 44.4));
    ll.add("Skuli", make_data(74, 13, 55.5));
    ll.print_list();
    cout << endl;

    
    cout << endl;
    cout << "\nTESTING WRITABLE LIST\n" << endl;
    WritableList wl;
    wl.print_list();
    wl.add("John", make_data(34, 5, 11.1));
    wl.print_list();
    cout << endl;
    wl.add("Sandra", make_data(44, 7, 22.2));
    wl.add("Johanna", make_data(54, 9, 33.3));
    wl.print_list();
    cout << endl;
    wl.add("Eva", make_data(64, 11, 44.4));
    wl.add("Skuli", make_data(74, 13, 55.5));
    
    cout << "printing wl before write" << endl;
    wl.print_list();
    cout << endl;

    wl.write_to_file("labelled_list_test_file.wl");

    cout << "printing wl after write" << endl;
    wl.print_list();
    cout << endl;

    
    WritableList wl2;
    cout << "printing wl2 before read" << endl;
    wl2.print_list();
    wl2.read_from_file("labelled_list_test_file.wl");
    cout << "printing wl2 after read" << endl;
    wl2.print_list();


    return 0;
}