#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

class Player {
private:
    std::string car;
    std::string numberCar;
    static int playerCount;

public:
    Player();
    Player(const Player& other);
    Player(Player&& other) noexcept;
    void CreateCar();
    void CreateNumberCar();
    void CarPanel();
    void ParkingCars();
    std::string getCar();
    static int getPlayerCount();

    Player& operator++();
    Player operator++(int);
    Player operator+(const Player& other) const;
    friend std::istream& operator>>(std::istream& in, Player& player);
    friend std::ostream& operator<<(std::ostream& out, const Player& player);
};

#endif // PLAYER_H