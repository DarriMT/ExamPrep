#include <iostream>
#include <fstream>

using namespace std;

void read_file_and_add(){
    string filename;
    // cout << "Enter a filename: ";
    // cin >> filename;
    filename = "example_input.txt";

    ifstream file(filename);

    while(!(file.eof() || file.peek() == EOF)){
        int a, b;
        file >> a >> b;
        int sum = a + b;
        cout << "The sum of " << a << " + " << b << " is = " << sum << endl;
    }

}

int main(){
    read_file_and_add();
    return 0;
}