#ifndef SPOUSE_H
#define SPOUSE_H
#include <string>
#include "family.h"
using namespace std;
class Spouse : public Family {
private:
    string partnerName;
public:
    Spouse(string name, int age, string surname, int numRelatives, string partnerName);
    void getInfo() override;
    void motto() override;
};
#endif //SPOUSE_H
