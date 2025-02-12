#include <iostream>
#include "family.h"
using namespace std;
Family::Family():Person() {
    surname = "Unknown";
    numRelatives = 0;
}
Family::Family(string name, int age, string surname, int numRelatives):Person(name, age) {
    this->surname = surname;
    this->numRelatives = numRelatives;
}
void Family::getInfo() {
    cout << "Family class:: Family name: " << surname << "\nFamily class:: Number of relatives: " << numRelatives << endl;
}
void Family::motto() {
    cout << "Family class:: We are family" << endl;
}