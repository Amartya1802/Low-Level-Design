#include<bits/stdc++.h>

using namespace std;

class Vehicle {
public: 
    virtual void start() = 0;
    virtual void stop() = 0;

    virtual ~Vehicle() {}
};

class Honda : public Vehicle {
public:
    void start() override {
        cout << "Honda car is starting" << endl;
    }

    void stop() override {
        cout << "Honda car is stopping" << endl;
    }
};

class Toyota : public Vehicle {
public:
    void start() override {
        cout << "Toyota car is starting" << endl;
    }

    void stop() override {
        cout << "Toyota car is stopping" << endl;
    }
};

class BMW : public Vehicle {
public:
    void start() override {
        cout << "BMW car is starting" << endl;
    }

    void stop() override {
        cout << "BMW car is stopping" << endl;
    }
};

class CarFactory {
public: 
    static Vehicle* createVehicle(const string& type) {
        if (type == "Honda") {
            return new Honda();
        } 
        else if (type == "Toyota") {
            return new Toyota();
        } 
        else if (type == "BMW") {
            return new BMW();
        } 
        else {
            throw invalid_argument("Unknown vehicle type");
        }
    }
};

int main() {
    CarFactory *factory = new CarFactory();
    Vehicle *vehicle = factory->createVehicle("Honda");
    vehicle->start();
    vehicle->stop();

    delete vehicle;
    delete factory;
    return 0;
}