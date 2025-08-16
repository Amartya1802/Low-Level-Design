#include<bits/stdc++.h>
using namespace std;

//vehicle interface
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


// we make another interface for factories
class VehicleFactory {
public:
    virtual Vehicle *createVehicle() = 0;

    virtual ~VehicleFactory() {}
};

class HondaFactory : public VehicleFactory {
public:
    Vehicle *createVehicle() override {
        return new Honda();
    }
};

class ToyotaFactory : public VehicleFactory {
public:
    Vehicle *createVehicle() override {
        return new Toyota();
    }
};

class BMWFactory : public VehicleFactory {
public:
    Vehicle *createVehicle() override {
        return new BMW();
    }
};

int main() {
    VehicleFactory *factory = new HondaFactory();
    Vehicle *honda = factory->createVehicle();
    honda->start();
    honda->stop();

    delete honda;
    delete factory;
    return 0;
}