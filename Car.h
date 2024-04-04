#ifndef LABA3_CAR_H
#define LABA3_CAR_H
#include <iostream>
#include <string>
class Car{
protected:
    std::string car = "No Car!";
    std::string numberCar = "No Number Car!";
    static std::string Cars;
public:
    void CreateCar();
    void CreateNumberCar();
    void CarPanel();
    void ParkingCars();
};


#endif //LABA3_CAR_H
