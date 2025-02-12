#ifndef FAMILY_H
#define FAMILY_H
#include "person.h"
#include <string>
using namespace std;
class Family: public Person {
private:
    string surname;
    int numRelatives;
public:
    Family();
    Family(string name, int age, string surname, int numRelatives);
    void getInfo() override;
    virtual void motto();
};
#endif //FAMILY_H
