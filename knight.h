#ifndef KNIGHT_H
#define KNIGHT_H
#include <cstdlib>
#include <ctime>
using namespace std;
class Knight {
private:
    string name;
    int health;
    bool is_alive;
public:
    Knight() {
        name = "Robb Stark";
        health = 100;
        is_alive = true;
    }
    Knight(string name) {
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
    int shield_strike() {
        cout << name << " uses shield strike." << endl;
        return 5;
    }
    int basic_attack() {
        cout << name << " uses basic attack." << endl;
        return 10;
    }
    int sword_attack() {
        cout << name << " uses sword attack." << endl;
        return 15;
    }
    int heavy_attack() {
        cout << name << " uses heavy attack." << endl;
        return 20;
    }
    int heal() {
        srand(time(0));
        int heal = rand() % 16 + 5;
        cout << name << " heals for " << heal << " health points." << endl;
        return heal;
    }
};
#endif //KNIGHT_H
