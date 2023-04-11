#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* change return value and/or add parameters*/
void do_operation_on_entire_list(vector<int> &list1, vector<int> &list2 /*add your parameters here*/){
    //add functionality that calls an operation
}

int add_numbers(int number1, int number2){
    return number1 + number2;
}

// add_numbers
// multiply_numbers
// subtract_numbers
// select_lower
// select_higher

vector<int> read_list(string filename){
    return vector<int>();
}

int main(){
    vector<int> v1 = read_list("numbers01.txt");
    vector<int> v2 = read_list("numbers02.txt");

    for(int i = 0; i < 10; i++){
        cout << "sum: " << add_numbers(v1[i], v2[i]);
    }
}