#ifndef ADDABLE_H_4457345
#define ADDABLE_H_4457345

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
T add(T a, T b){
    return a + b;
}

class Addable{
public:
    Addable(int n, double x);
    Addable operator+(const Addable & other) const;

    friend ostream & operator<<(ostream & os, const Addable & obj);

    static vector<Addable> add_and_return(int num_pairs);


private:
    int n;
    double x;
};

#endif //ADDABLE_H_4457345