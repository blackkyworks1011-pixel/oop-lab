#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;

public:
    Vehicle(string b) : brand(b) {}

    virtual void display() {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle {
public:
    Car(string b) : Vehicle(b) {}

    void display() override {
        cout << "Car Brand: " << brand << endl;
    }
};

class Bike : public Vehicle {
public:
    Bike(string b) : Vehicle(b) {}

    void display() override {
        cout << "Bike Brand: " << brand << endl;
    }
};

int main() {
    Car c("Toyota");
    Bike b("Yamaha");

    c.display();
    b.display();

    return 0;
}
