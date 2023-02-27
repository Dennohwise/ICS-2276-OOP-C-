#include <iostream>
#include <string>
using namespace std;

class Computer {
protected:
    string brand;
    int year;
public:
    Computer(string brand, int year) {
        this->brand = brand;
        this->year = year;
    }
    void printInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

// Child class Client
class Client : public Computer {
private:
    int numUsers;
public:
    Client(string brand, int year, int numUsers) : Computer(brand, year) {
        this->numUsers = numUsers;
    }
    void printInfo() {
        Computer::printInfo();
        cout << "Number of Users: " << numUsers << endl;
    }
};

// Child class Server
class Server : public Computer {
private:
    int numCores;
public:
    Server(string brand, int year, int numCores) : Computer(brand, year) {
        this->numCores = numCores;
    }
    void printInfo() {
        Computer::printInfo();
        cout << "Number of Cores: " << numCores << endl;
    }
};

int main() {
    // Create objects of both child classes
    Client myClient("Dell", 2018, 5);
    Server myServer("HP", 2020, 12);

    // Call printInfo() for both objects
    cout << "Client Computer Information: " << endl;
    myClient.printInfo();

    cout << endl;

    cout << "Server Computer Information: " << endl;
    myServer.printInfo();

    return 0;
}
