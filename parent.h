#ifndef PARENT_H
#define PARENT_H
#include "family.h"
using namespace std;
class Parent : public Family{
private:
    int numChildren;
public:
    Parent(string name, int age, string surname, int numRelatives, int numChildren);
    void getInfo() override;
    void motto() override;
};
#endif //PARENT_H
