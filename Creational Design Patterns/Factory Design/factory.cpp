#include<bits/stdc++.h>

using namespace std;

class Vehicle {
public:
    virtual void start() = 0;
    virtual void stop() = 0;

    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public: 
    void start() override {
        cout<<"Car is starting"<<endl;
    }
    void stop() override {
        cout<<"Car is stopping"<<endl;
    }
};

class Truck : public Vehicle {
public:
    void start() override {
        cout<<"Truck is starting"<<endl;
    }
    void stop() override {
        cout<<"Truck is stopping"<<endl;
    }
};

class Bike : public Vehicle {
public:
    void start() override {
        cout<<"Bike is starting"<<endl;
    }
    void stop() override {
        cout<<"Bike is stopping"<<endl;
    }
};

class VehicleFactory {
public:
    // through this pointer the virtual function calls invoke derived class overrides
    static Vehicle* getVehicle(const string& type) {
        if(type == "Car") {
            return new Car();
        } 
        else if(type == "Truck") {
            return new Truck();
        } 
        else if(type == "Bike") {
            return new Bike();
        }
        else {
            throw invalid_argument("Unknown vehicle type");
        }
    }
};

int main() {
    string type;
    cin>>type;

    Vehicle* vehicle = VehicleFactory::getVehicle(type);
    
    vehicle->start();
    vehicle->stop();

    delete vehicle;

    return 0;
}