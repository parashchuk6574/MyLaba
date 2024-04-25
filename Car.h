#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car : public Vehicle {
public:
    Car(const std::string& brand, const std::string& model, int year);
    std::string getTypeInEnglish() const override;
    void showAdditionalInfo() const override;
};

#endif // CAR_H
