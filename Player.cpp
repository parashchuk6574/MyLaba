#include "Player.h"
std::string Cars;

int Player::playerCount = 0;

Player::Player() {
    playerCount++;
}

Player::Player(const Player &other) {
    playerCount++;
    this->car = other.car;
    this->numberCar = other.numberCar;
}

Player::Player(Player &&other) noexcept {
    playerCount++;
    this->car = std::move(other.car);
    this->numberCar = std::move(other.numberCar);
}

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

std::string Player::getCar() {
    return std::move(this->car);
}

Player& Player::operator++() {
    playerCount++;
    return *this;
}

Player Player::operator++(int) {
    Player temp(*this);
    ++(*this);
    return temp;
}

Player Player::operator+(const Player& other) const {
    Player result;
    result.car = car + other.car;
    result.numberCar = numberCar + other.numberCar;
    return result;
}

std::istream& operator>>(std::istream& in, Player& player) {
    in >> player.car >> player.numberCar;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Player& player) {
    return out;
}

int Player::getPlayerCount() {
    return playerCount;
}