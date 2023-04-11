#include <iostream>


using namespace std;



int main(){
    auto players = read_players_from_file("player_test_file.txt");
    for(auto player : players){
        cout << player << endl;
    }
    return 0;
}