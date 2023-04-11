#include <iostream>
#include <string.h>

using namespace std;

bool compare_strings(char *s1, char *s2){
    int smaller = strlen(s1) < strlen(s2) ? strlen(s1) : strlen(s2);
    int bigger = strlen(s1) > strlen(s2) ? strlen(s1) : strlen(s2);
    int count = 0;
    int difference = bigger - smaller;
    cout << "The strings are different at indexes: ";
    for(int i = 0; i < bigger; i++){
        if(i > bigger ){
            cout << i << " ";
            count++;
        }
        if(s1[i] != s2[i]){
            cout << i << " ";
            count++;
        }
    }
    cout << endl;
    return count == 0;

}


int main(){
    char str1[1024];
    char str2[1024];
    cout << "Enter a string: ";
    cin >> str1;
    cout << "Enter a string: ";
    cin >> str2;
    if(compare_strings(str1, str2)){
        cout << "The strings are identical" << endl;
    }
    return 0;
}