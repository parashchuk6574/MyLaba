#include "motorcycle.h"
using namespace std;
Motorcycle::Motorcycle(const string& brand, const string& model, int year)
        : Vehicle("Motorcycle", brand, model, year) {}

string Motorcycle::getTypeInEnglish() const {
    return "Motorcycle";
}

void Motorcycle::showAdditionalInfo() const {
    cout << "Additional info for Motorcycle." << endl;
}