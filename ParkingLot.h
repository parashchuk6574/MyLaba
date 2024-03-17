#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <vector>

class ParkingLot {
private:
    std::vector<bool> parkingSpaces;

public:
    ParkingLot(int numSpaces);
    bool parkCar(int spot);
    void PrintParkingStatus();
};

#endif // PARKINGLOT_H
