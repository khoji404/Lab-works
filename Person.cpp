#include <iostream>
#include "person.h"
using namespace std;
Person::Person() {
    name = "unnamed";
    age = 0;
}
Person::Person(string name, int age) {
    this->name = name;
    this->age = age;
}
void Person::getInfo() {
    cout << "Person class:: Name: " << name << "\nPerson class:: Age: " << age << endl;
}