#include <iostream>
#include <vector>
#include <string>
#include "Vehicle.h"
#include "Motorcycle.h"
#include "Car.h"
using namespace std;
int main() {
    vector<Vehicle*> vehicles;

    char choice;
    do {
        cout << "Menu:\n";
        cout << "1. Add a car\n";
        cout << "2. Add a motorcycle\n";
        cout << "3. Display parking\n";
        cout << "4. Delete a vehicle\n";
        cout << "5. Exit\n";
        cout << "Enter: ";

        int option;
        cin >> option;
        int indexCars=0;
        switch (option) {
            case 1: {
                string brand, model;
                int year;

                cout << "Enter brand of the car: ";
                cin >> brand;
                cin.ignore();
                cout << "Enter model of the car: ";
                getline(cin,model);
                cout << "Enter year of the car: ";
                cin >> year;

                vehicles.push_back(new Car(brand, model, year));
                cout << "Car added! " << endl;
                break;
            }
            case 2: {
                string brand, model;
                int year;
                cin.ignore();
                cout << "Enter brand of the motorcycle: ";
                getline(cin , brand);

                cout << "Enter model of the motorcycle: ";
                getline(cin , model);

                cout << "Enter year of the motorcycle: ";
                cin >> year;

                vehicles.push_back(new Motorcycle(brand, model, year));
                cout << "Motorcycle added!" << endl;
                break;
            }
            case 3:
                cout << "\nParking:\n";
                for (const auto& vehicle : vehicles) {
                    cout << "==================================================\n";
                    vehicle->display();
                    cout << "==================================================\n";
                }
                break;
            case 4: {
                if (vehicles.empty()) {
                    cout << "No vehicles!" << endl;
                    break;
                }

                cout << "Enter index of the vehicle to remove (0 to " << vehicles.size() - 1 << "): ";
                int index;
                cin >> index;
                cin.ignore();

                if (index >= 0 && index < vehicles.size()) {
                    delete vehicles[index];
                    vehicles.erase(vehicles.begin() + index);
                    cout << "Vehicle removed successfully!" << endl;
                }
                else {
                    cout << "Invalid index!" << endl;
                }
                break;
            }
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid option!" << endl;
                break;
        }

        if (option != 5) {
            cout << "\nDo you want to continue? (y/n): ";
            cin >> choice;
        }

    } while (choice == 'y' || choice == 'Y');

    for (auto& vehicle : vehicles) {
        delete vehicle;
    }
    vehicles.clear();

    return 0;
}
