#include <iostream>

using namespace std;

int count_value(int arr[], int len, int val){
    int count = 0;
    cout << "Indexes with correct value:";
    for(int i = 0; i < len; i++){
        if(arr[i] == val){
            cout << " " << i;
            count++;
        }
    }
    cout << endl;
    return count;
}

using namespace std;

int main(){
    srand(3473936);
    for(int i = 0; i < 10; i++){
        int value = rand() % 10;
        int arr_len = 8 + (rand() % 7);
        int *array = new int[arr_len];
        cout << "The array: ";
        for(int j = 0; j < arr_len; j++){
            if(i != 0 && ((rand() % i) == 3)){
                array[j] = value;
            }
            else{
                array[j] = rand() % 10;
            }
            cout << array[j] << " ";
        }
        cout << "\nThe value: " << value << endl;
/**** THIS IS WHERE THE OPERATION IS CALLED *****/
        int value_count_in_array = count_value(array, arr_len, value);
/**** **** ** ***** *** ********* ** ****** *****/
        cout << "The value occurs " << value_count_in_array << " times in the array!\n" << endl;
        delete[] array;
    }
    return 0;
}