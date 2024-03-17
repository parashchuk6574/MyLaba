#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "Parking.h"
#include "ParkingLot.h"
using namespace std;
string name;
int numPark;
int Name;
int Sistem;

vector<int> number_park{0};

void print_line()
{
    for (int i = 0; i < 25; i++)
        cout << "=";
}

void LoginPanel() {
    do
    {
        print_line();
        cout << "\nEnter the user!\n0-End the program\n1 - Player_1\n2 - Player_2\n Enter: ";
        Name = 0;
        cin >> Name;
        if (Name == 0 || Name == 1 || Name == 2)
            break;
        else
            cout << "You made a mistake!!!" << endl;
    } while (true);
}

void SistemPanel() {
    do
    {
        print_line();
        cout << "\n1 - Change the name of the car\n"
                "2 - Enter the vehicle number\n"
                "3 - Display your car information\n"
                "4 - Parking spaces\n"
                "5 - Park you car\n"
                "6 - Change user\n"
                "=========================================================\n"
                "//////Enter : ";
        Sistem = 0;
        cin >> Sistem;
        if (Sistem == 0 || Sistem == 1 || Sistem == 2 || Sistem == 3 || Sistem == 4 || Sistem == 5 || Sistem == 6)
        break;
        else
        cout << "\nYou made a mistake!!!" << endl;
    } while (true);
}

Parking Park1;
Parking Park2;
Parking Park3;
Parking Park4;

void PanelParking() {
    Park1.panel();
    Park2.panel();
    Park3.panel();
    Park4.panel();
}



const int numParkingSpaces = 4;
ParkingLot parkingLot(numParkingSpaces);

void ParkingSistem() {
    while (true) {
        parkingLot.PrintParkingStatus();

        int userChoice;
        cout << "Please enter number park (1-4): ";
        cin >> userChoice;

        if (!parkingLot.parkCar(userChoice)) {
            continue;
        }
        else
            break;
    }

}
Player Player1;
Player Player2;
void ExitPanelPlayers(){
    string Exit;
    cout << "Exit panel!\n";
    cin >> Exit;
}

void GlobalFuncial(){
    int value = 0;

    LoginPanel();
    while (value < 1) {
        if (Name == 0){
            value = 1;
        }//Player1;
        else if (Name == 1) {
            SistemPanel();
            if (Sistem == 1) {
                Player1.CreateCar();
            } else if (Sistem == 2) {
                Player1.CreateNumberCar();
            } else if (Sistem == 3) {
                Player1.CarPanel();
                ExitPanelPlayers();
            }else if(Sistem == 4) {
                PanelParking();
            }else if(Sistem == 5){
                Player1.getCar();
                ParkingSistem();
            }else if (Sistem == 6) {
                LoginPanel();
            } else {
                cout << "Erorr! Plase Enter (1-4)!\n";
                SistemPanel();
            }


            // Player2;
        } else if (Name == 2) {
            SistemPanel();
            if (Sistem == 1) {
                Player2.CreateCar();
            } else if (Sistem == 2) {
                Player2.CreateNumberCar();
            } else if (Sistem == 3) {
                Player2.CarPanel();
                ExitPanelPlayers();
            }else if(Sistem == 4){
                PanelParking();
            } else if(Sistem == 5){
                Player2.ParkingCars();
                ParkingSistem();
            }else if (Sistem == 6) {
                LoginPanel();
            } else {
                cout << "Erorr! Plase Enter (1-4)!\n";
                SistemPanel();
            }
        } else {
            cout << "Error! ";
            LoginPanel();
        }
    }
}

int main() {
    GlobalFuncial();
    return 0;
}