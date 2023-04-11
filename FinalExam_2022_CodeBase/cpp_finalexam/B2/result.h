#ifndef RESULT_H_11987234
#define RESULT_H_11987234

#include <string>
#include <iostream>

using namespace std;

class Result{
    public:
    Result();
    Result(string analyst, int count, double amount, bool confirmed);
    Result(const Result & result);

    //Getters
    string get_analyst();
    int get_count();
    double get_amount();
    bool get_confirmed();

    //Setters
    void set_analyst(string analyst);
    void set_count(int count);
    void set_amount(double amout);
    void set_confirmed(bool confirmed);

    //overload
    friend ostream & operator<<(ostream & os, const Result & obj);

    private:
        string analyst;
        int count;
        double amount ;
        bool confirmed;

};


#endif //RESULT_H_11987234