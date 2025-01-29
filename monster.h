#ifndef MONSTER_H
#define MONSTER_H
#include <cstdlib>
#include <ctime>
using namespace std;
class Monster {
private:
    string name;
    int health;
    bool is_alive;
public:
    Monster() {
        name = "White walker";
        health = 100;
        is_alive = true;
    }
    Monster(string name) {
        this->name = name;
        health = 100;
        is_alive = true;
    }
    string get_name() {
        return name;
    }
    void set_name(string name) {
        this->name = name;
    }
    int get_health() {
        return health;
    }
    void set_health(int health) {
        this->health = health;
    }
    bool get_is_alive() {
        return is_alive;
    }
    void set_is_alive(bool is_alive) {
        this->is_alive = is_alive;
    }
    int claw_attack() {
        cout << name << " slashes with its claws!" << endl;
        return 8;
    }
    int bite_attack() {
        cout << name << " bites ferociously!" << endl;
        return 12;
    }
    int roar_attack() {
        cout << name << " unleashes a terrifying roar!!" << endl;
        return 18;
    }
    int heal() {
        srand(time(0));
        int heal = rand() % 10 + 10;
        cout << name << " heals for " << heal << " health points." << endl;
        if (health > 100) {
            set_health(100);
        }
        return heal;
    }
};
#endif //MONSTER_H
