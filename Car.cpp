
#include "Car.h"
std::string Car::Cars;
void Car::CreateCar() {
    std::cout << "Please enter the name of the car:";
    car.clear();
    std::cin >> car;
}

void Car::CreateNumberCar() {
    std::cout << "Please enter the number of the car:";
    numberCar.clear();
    std::cin >> numberCar;
}

void Car::CarPanel() {
    std::cout << "Car: " << car << std::endl
              << "Number: " << numberCar << std::endl;
}

void Car::ParkingCars() {
    Cars = car;
}