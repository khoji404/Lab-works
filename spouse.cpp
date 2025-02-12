#include <iostream>
#include "spouse.h"
using namespace std;
Spouse::Spouse(string name, int age, string surname, int numRelatives, string partnerName) : Family(name, age, surname, numRelatives) {
    this->partnerName = partnerName;
}
void Spouse::getInfo() {
    cout << "Spouse class:: Partner name: " << partnerName << endl;
}
void Spouse::motto() {
    cout << "Spouse class:: Forever and ever";
}
