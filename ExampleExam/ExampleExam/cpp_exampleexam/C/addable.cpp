#include "addable.h"
#include <random>

Addable::Addable(int n, double x){
    this->n = n;
    this->x = x;
}

Addable Addable::operator+(const Addable & other)const{
    return Addable(
        this->n + other.n,
        this->x + other.x
    );

}

ostream & operator<<(ostream & os, const Addable & obj) {
    os << "Addable("
       << "n =  " << obj.n << ","
       << "x = " << obj.x
       << ")";
    return os;
}

vector<Addable> Addable::add_and_return(int num_pairs){

    vector<Addable> addables;

    for(int i = 0; i < num_pairs; i++){
        int x1 = rand() % 10000;
        int x2 = rand() % 10000;
        
        double n1 = ((double) rand() / (double) RAND_MAX);
        double n2 = ((double) rand() / (double) RAND_MAX);

        Addable addable1(
            n1, x1
        );

        Addable addable2(
            n2, x2
        );

        Addable added = add (addable1, addable2);

        addables.push_back(added);

    }

    return addables;

}
