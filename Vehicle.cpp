#include "Vehicle.h"
using namespace std;
// Ініціалізація статичного члена
int Vehicle::playerCount = 0;

// Конструктори
Vehicle::Vehicle() : type("Undefined"), brand("Undefined"), model("Undefined"), year(0) {
    playerCount++;
}

Vehicle::Vehicle(const string& type, const string& brand, const string& model, int year)
        : type(type), brand(brand), model(model), year(year) {
    playerCount++;
}

Vehicle::Vehicle(const Vehicle& other)
        : type(other.type), brand(other.brand), model(other.model), year(other.year) {
    playerCount++;
}

Vehicle::Vehicle(Vehicle&& other) noexcept
        : type(move(other.type)), brand(move(other.brand)), model(move(other.model)), year(other.year) {
    playerCount++;
    other.year = 0;
}

// Оператори
Vehicle& Vehicle::operator++() {
    year++;
    return *this;
}


// Друзі класу
istream& operator>>(istream& in, Vehicle& vehicle) {
    in >> vehicle.type >> vehicle.brand >> vehicle.model >> vehicle.year;
    return in;
}

ostream& operator<<(ostream& out, const Vehicle& vehicle) {
    out << "Type: " << vehicle.type << ", Brand: " << vehicle.brand << ", Model: " << vehicle.model << ", Year: " << vehicle.year;
    return out;
}

// Віртуальний деструктор
Vehicle::~Vehicle() {
    playerCount--;
}

void Vehicle::display() const {
    cout << "Type: " << type << ", Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
}
