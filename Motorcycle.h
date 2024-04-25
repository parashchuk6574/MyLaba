#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
using namespace std;
#include "vehicle.h"

class Motorcycle : public Vehicle {
public:
    Motorcycle(const string& brand, const string& model, int year);
    string getTypeInEnglish() const override;
    void showAdditionalInfo() const override;
};

#endif // MOTORCYCLE_H
