#include "Parking.h"
int i = 0;
void Parking::addCar() {
CarName=getCar();
}

void Parking::panel() {
    addCar();
    std::cout << "car: " << CarName << std::endl;
    CarName.clear();
}
