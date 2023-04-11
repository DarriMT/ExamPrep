#include "player.h"


Player::Player(){
    this->name = "";
    this->number = 0;
    this->result = 0;
}

Player::Player(string name, int number, double result){
    this->name=name;
    this->number=number;
    this->result=result;
}

Player::Player(const Player & obj){
    this->name=obj.name;
    this->number=obj.number;
    this->result=obj.result;
}

//Getters

string Player::get_name(){
    return this->name;
}

int Player::get_number(){
    return this->number;
}

double Player::get_result(){
    return this->result;
}

//Setters

void Player::set_name(string name){
    this->name = name;
}

void Player::set_number(int number){
    this->number = number;
}

void Player::set_result(double result){
    this->result = result;
}


ostream & operator<<(ostream & os, Player & obj) {

    os << "Player " << endl
       << "Name: " << obj.get_name() << endl
       << "Number: " << obj.get_number() << endl
       << "Result: " << obj.get_result() << endl;

    return os;

}