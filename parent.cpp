#include <iostream>
#include "parent.h"
using namespace std;
Parent::Parent(string name, int age, string surname, int numRelatives, int numChildren) : Family(name, age, surname, numRelatives) {
    this->numChildren = numChildren;
}
void Parent::getInfo() {
    cout << "Parent class:: Number of children: " << numChildren << endl;
}
void Parent::motto() {
    cout << "Parent class:: Best parent!" << endl;
}
