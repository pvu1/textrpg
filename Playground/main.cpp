#include <iostream>
#include <cstdlib>
#include <time.h>
#include"Actions.hpp"
#include"Class.hpp"

using namespace std;

int main() {
    cout<<"Hello, World!"<<endl;
    string playerchoice;
    initial_healthpoints();
////    char action[10];
////    cin>> action;
////    cout<< action<<endl;
//    playerhealth = subtract_health(playerhealth, strength, is_dead);
//    playerhealth = drink_potion(playerhealth, medium);
//    playerhealth = subtract_health(playerhealth, strength, is_dead);
//    playerhealth = subtract_health(playerhealth, strength, is_dead);
    player();
    cout<<player.strength;
    
    while (playerhealth != 0 && enemyhealth !=0 && playerchoice != "run") {
        cout<<"What would you like to do?"<<endl;
//        <<"attack"<<endl<<"run"<<endl<<"drink potion"<<endl;
        cin>> playerchoice;
        action(playerchoice);
    }
    
    return enemyhealth;
}
