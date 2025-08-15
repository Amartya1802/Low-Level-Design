#include <bits/stdc++.h>
using namespace std;

//abstruct class
class Vehicle {
public:
    virtual void start() = 0; //pure virtual function
    virtual void stop() = 0; //pure virtual function

    virtual ~Vehicle() {} //virtual destructor
};

class Car : public Vehicle{
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

int main() {
    // Vehicle *vehicle1 = new Car();
    // vehicle1->start();
    // vehicle1->stop();

    // Vehicle *vehicle2 = new Truck();
    // vehicle2->start();
    // vehicle2->stop();

    // Vehicle *vehicle3 = new Bike();
    // vehicle3->start();
    // vehicle3->stop();

    // delete vehicle1;
    // delete vehicle2;
    // delete vehicle3;
    string type;
    cin>>type;
    Vehicle *vehicle = NULL;
    if(type == "car") {
        vehicle = new Car();
    } 
    else if(type == "truck") {
        vehicle = new Truck();
    } 
    else if(type == "bike") {
        vehicle = new Bike();
    }

    vehicle->start();
    vehicle->stop();

    delete vehicle;
    return 0;
}
