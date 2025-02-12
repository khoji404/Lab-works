#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    Person();
    Person(string name, int age);
    virtual void getInfo();
};
#endif //PERSON_H
