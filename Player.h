#ifndef PLAYER_H
#define PLAYER_H

#include "Car.h"

class Player:public Car{
private:
    static int playerCount;
public:
    Player();
    Player(const Player& other);
    Player(Player&& other) noexcept;
    std::string getCar();
    static int getPlayerCount();

    Player& operator++();
    Player operator++(int);
    Player operator+(const Player& other) const;
    friend std::istream& operator>>(std::istream& in, Player& player);
    friend std::ostream& operator<<(std::ostream& out, const Player& player);
};

#endif // PLAYER_H