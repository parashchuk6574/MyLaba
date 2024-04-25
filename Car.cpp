#include "car.h"
using namespace std;
Car::Car(const std::string& brand, const std::string& model, int year)
        : Vehicle("Car", brand, model, year) {}
string Car::getTypeInEnglish() const {
    return "Car";
}

void Car::showAdditionalInfo() const {
    cout << "Additional info for Car." << endl;
}