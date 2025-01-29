#include <iostream>
#include "knight.h"
#include "monster.h"
#include <cstdlib>
#include <ctime>
using namespace std;
void start_game() {
    string name;
    cin >> name;
    Knight player = Knight(name);
    Monster opponent = Monster();
    srand(time(0));
    void knight_turn(Knight &player, Monster &opponent) {
        cout << player.get_name() << "'s turn" << endl;
        int attack;
        cout << "Enter your action (1.Shield strike; 2.Basic attack; 3.Sword attack; 4.Heavy attack; 5.Heal): " << endl;
        cin >> attack;
        switch (attack) {
            case 1:
                opponent.set_health(opponent.get_health() - player.shield_strike());
                break;
            case 2:
                opponent.set_health(opponent.get_health() - player.basic_attack());
                break;
            case 3:
                opponent.set_health(opponent.get_health() - player.sword_attack());
                break;
            case 4:
                opponent.set_health(opponent.get_health() - player.heavy_attack());
                break;
            case 5:
                opponent.set_health(opponent.get_health() + opponent.heal());
                if (opponent.get_health() > 100) {
                    opponent.set_health(100);
                }
                break;
            default:
                break;
        }
        cout << opponent.get_name() << "'s health is " << opponent.get_health() << endl;
        if (opponent.get_health()<= 0) {
            opponent.set_is_alive(false);
        }
    }
    while (opponent.get_is_alive() && player.get_is_alive()) {

    }
    cout << opponent.get_name() << " is defeated!!!" << endl;
}