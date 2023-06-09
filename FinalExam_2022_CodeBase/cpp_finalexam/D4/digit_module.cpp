#include <iostream>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <vector>

using namespace std;

int digit_count(int n) {
    int cnt = 0;
    while(n != 0) {
        n/= 10;
        cnt++;
    }
    return cnt;
}

std::vector<int> get_digit_count_for_integers(std::vector<int> numbers) {
    std::vector<int> counts;

    for(auto n: numbers){
        counts.push_back(digit_count(n));
    }
    return counts;
}


PYBIND11_MODULE(digit_module, m) {

    // add functions like this
    m.def(

        // what the function should be called in the python module
        "get_digit_count_for_integers", 

        // pointer to your c++ function 
        &get_digit_count_for_integers, 

        // description of the function
        "Get most significant digits"
    );
}