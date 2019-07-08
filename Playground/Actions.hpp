//
//  Actions.hpp
//  Playground
//
//  Created by Peter Vu on 7/7/19.
//  Copyright © 2019 Peter Vu. All rights reserved.
//

#ifndef Actions_hpp
#define Actions_hpp

#include <iostream>
#include <cstdlib>
#include <time.h>
#endif /* Actions_hpp */

using namespace std;

typedef int counter;
typedef int potion;
bool is_dead = false;
char attack;

//Placeholder player stats
counter playerhealth = 100;
counter enemyhealth = 50;
potion small = 15;
potion medium = 30;
potion large = 45;
int strength = 50;

//Displays initial health
void initial_healthpoints() {
    cout<<"Your health is "<<playerhealth<<endl;
}

//subtracts health
int subtract_health(counter healthpoints,int strength,bool is_dead) {
    if (is_dead) {
        return 0;
    }
    
    srand (time(NULL));
    int damage = rand() % (6 + strength) ;
    int new_healthpoints = healthpoints - damage;
    
    if(new_healthpoints <= 0) {
        cout<<"Congrats! You killed the monster."<<endl;
        new_healthpoints = 0;
        is_dead = true;
        return new_healthpoints;
        return is_dead;
    }
    
    else {
        cout<<"Its health is "<<new_healthpoints<<endl;
        return new_healthpoints;
    }
}

//run action (option to run away) placeholder
void run() {
    cout<< "You successfully ran away!"<<endl;
}

//drink potion
int drink_potion(counter healthpoints, potion potion_strength) {
    int new_healthpoints = healthpoints + potion_strength;
    cout<< "You healed up! Your health is "<<new_healthpoints<<endl;
    return new_healthpoints;
}

//action terminal
int action(string playerchoice) {
    if(playerchoice == "attack") {
        enemyhealth = subtract_health(enemyhealth, 75, is_dead);
        return enemyhealth;
    }
    
    if(playerchoice == "drink potion") {
        playerhealth = drink_potion(playerhealth, medium);
        return playerhealth;
    }
    
    if(playerchoice == "run") {
        run();
        return 0;
    }
    else {
        cout<< "Please select one of the available options";
        return 0;
    }
}
