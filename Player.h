#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <vector>

class Player {
private:
    std::string car = "No Car!";
    std::string numberCar = "No Number Car!";
public:
    Player();
    void CreateCar();
    void CreateNumberCar();
    void CarPanel();
    void ParkingCars();
    std::string getCar();
};

#endif // PLAYER_H
