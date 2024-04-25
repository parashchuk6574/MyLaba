#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>
using namespace std;
class Vehicle {
protected:
    string type;
    string brand;
    string model;
    int year;
    static int playerCount;

public:
    Vehicle();
    Vehicle(const string& type, const string& brand, const string& model, int year);
    Vehicle(const Vehicle& other);
    Vehicle(Vehicle&& other) noexcept;

    static int getPlayerCount() { return playerCount; }

    Vehicle& operator++();

    friend istream& operator>>(istream& in, Vehicle& vehicle);
    friend ostream& operator<<(ostream& out, const Vehicle& vehicle);

    virtual string getTypeInEnglish() const = 0;
    virtual void showAdditionalInfo() const = 0;
    virtual ~Vehicle();
    virtual void display() const;
};

#endif // VEHICLE_H
