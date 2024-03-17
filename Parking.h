#ifndef PARKING_H
#define PARKING_H

#include <iostream>
#include <string>
#include "Player.h"

class Parking : public Player{
private:
    std::string NamePlayer;
    std::string CarName =" ";
    std::string NumberCars;
public:
    void addCar();
    void panel();
};
#endif // PARKING_H
