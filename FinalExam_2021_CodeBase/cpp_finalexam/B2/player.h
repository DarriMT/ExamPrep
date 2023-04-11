#ifndef PLAYER_H_987234
#define PLAYER_H_987234

#include <string>
#include <iostream>

using namespace std;

class Player{

public:
    Player();
    Player(string name, int number, double result);
    Player(const Player & obj);

    //Getters
    string get_name();
    int get_number();
    double get_result();
    
    //Setters
    void set_name(string name);
    void set_number(int number);
    void set_result(double result);

private:
    string name;
    int number;
    double result;
};

ostream & operator<<(ostream & os, Player & obj);

#endif //PLAYER_H_987234