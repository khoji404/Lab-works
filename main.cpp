#include <iostream>
#include "parent.h"
#include "spouse.h"
using namespace std;
int main() {
    Parent john("John", 34,"Smith", 3, 1);
    Spouse robert("Robert", 26, "Tomson", 6, "Rose");
    john.getInfo();
    john.motto();
    john.Family::getInfo();
    john.Family::motto();
    john.Person::getInfo();
}