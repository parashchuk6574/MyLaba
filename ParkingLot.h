#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <vector>
#include "Parking.h"

class ParkingLot : public Parking{
private:
    std::vector<bool> parkingSpaces;

public:
    ParkingLot(int numSpaces);
    bool parkCar(int spot);
    void PrintParkingStatus();
};

#endif // PARKINGLOT_H
