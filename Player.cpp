#include "Player.h"
std::string Cars;
Player::Player() {}

void Player::CreateCar() {
    std::cout << "Please enter the name of the car:";
    car.clear();
    std::cin >> car;
}

void Player::CreateNumberCar() {
    std::cout << "Please enter the number of the car:";
    numberCar.clear();
    std::cin >> numberCar;
}

void Player::CarPanel() {
    std::cout << "Car: " << car << std::endl
              << "Number: " << numberCar << std::endl;
}


void Player::ParkingCars() {
    Cars = car;
}

std::string Player::getCar(){
    ParkingCars();
    return Cars;
}
