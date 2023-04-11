#include "result.h"

Result::Result(){
    this->analyst="";
    this->count=0;
    this->amount=0.0;
    this->confirmed=false;
}

Result::Result(string analyst, int count, double amount, bool confirmed){
    this->analyst = analyst;
    this->count = count;
    this->amount = amount;
    this->confirmed = confirmed;
}


Result::Result(const Result & player){
    this->analyst = player.analyst;
    this->count = player.count;
    this->amount = player.amount;
    this->confirmed = player.confirmed;
}

// Getters
double Result::get_amount(){
    return this->amount;
}

int Result::get_count(){
    return this->count;
}

string Result::get_analyst(){
    return this->analyst;
}

bool Result::get_confirmed(){
    return this->confirmed;
}

//Setters
void Result::set_amount(double amount){
    this->amount = amount;
}

void Result::set_count(int count){
    this->count = count;
}

void Result::set_analyst(string analyst){
    this->analyst = analyst;
}

void Result::set_confirmed(bool confirmed){
    this->confirmed = confirmed;
}

ostream & operator<<(ostream & os, const Result & obj){
    os << "Result : "
       << " Analyst : " << obj.analyst
       << " Count : " << obj.count
       << " Amount: " << obj.amount
       << (obj.confirmed ? "" : " Not " ) << " Confirmed";
    return os;
}