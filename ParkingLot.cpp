#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int numSpaces) : parkingSpaces(numSpaces, false) {}

bool ParkingLot::parkCar(int spot) {
    if (spot < 1 || spot > parkingSpaces.size()) {
        std::cout << "Error: Invalid parking spot selected." << std::endl;
        return false;
    }

    if (parkingSpaces[spot - 1]) {
        std::cout << "Error: Parking spot is already occupied." << std::endl;
        return false;
    }

    parkingSpaces[spot - 1] = true;
    std::cout << "Car parked at spot " << spot << "." << std::endl;
    return true;
}

void ParkingLot::PrintParkingStatus() {
    std::cout << "Parking status: ";
    for (size_t i = 0; i < parkingSpaces.size(); ++i) {
        std::cout << (parkingSpaces[i] ? "Occupied" : "Vacant") << " ";
    }
    std::cout << std::endl;
}

