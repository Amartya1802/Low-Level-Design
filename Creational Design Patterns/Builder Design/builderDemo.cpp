#include<bits/stdc++.h>
using namespace std;

class Car {
private:
    string engine;
    int wheels;
    int seats;
    string color;
    bool sunroof;
    bool navigationSystem;

public:
    // Forward declaration of CarBuilder
    class CarBuilder;

private:
    // Constructor that takes CarBuilder
    Car(const CarBuilder &builder) {
        this->engine = builder.engine;
        this->wheels = builder.wheels;
        this->seats = builder.seats;
        this->color = builder.color;
        this->sunroof = builder.sunroof;
        this->navigationSystem = builder.navigationSystem;
    }
    // Make CarBuilder a friend so it can access private constructor
    friend class CarBuilder;

public: 
    //getter methods
    string getEngine() { return engine; }
    int getWheels() { return wheels; }
    int getSeats() { return seats; }
    string getColor() { return color; }
    bool hasSunroof() { return sunroof; }
    bool hasNavigationSystem() { return navigationSystem; }

    void print() const {
        cout << "Car [engine=" << engine 
             << ", wheels=" << wheels
             << ", seats=" << seats
             << ", color=" << color
             << ", sunroof=" << (sunroof ? "true" : "false")
             << ", navigationSystem=" << (navigationSystem ? "true" : "false")
             << "]" << endl;
    }

    class CarBuilder {
    private: 
        friend class Car;
        //setting default values
        string engine;
        int wheels = 4;
        int seats = 5;
        string color = "Black";
        bool sunroof = false;
        bool navigationSystem = false;
    
    public: 
        CarBuilder setEngine(const string &eng) {
            this->engine = eng;
            return *this;
        }
        CarBuilder setWheels(int wh) {
            this->wheels = wh;
            return *this;
        }
        CarBuilder setSeats(int st) {
            seats = st;
            return *this;
        }
        CarBuilder setColor(const string &col) {
            color = col;
            return *this;
        }
        CarBuilder setSunroof(bool sr) {
            sunroof = sr;
            return *this;
        }
        CarBuilder setNavigationSystem(bool ns) {
            navigationSystem = ns;
            return *this;
        }
        Car build() {
            return Car(*this);
        }
        // ***MUST use "*this" for METHOD CHAINING***
    };
};

// Car::Car(const CarBuilder &builder) {
//     engine = builder.engine;
//     wheels = builder.wheels;
//     seats = builder.seats;
//     color = builder.color;
//     sunroof = builder.sunroof;
//     navigationSystem = builder.navigationSystem;
// }

int main() {
    Car::CarBuilder builder;

    Car car1 = builder.setEngine("V8")
                    .setWheels(4)
                    .setSeats(5)
                    .setColor("Red")
                    .setSunroof(true)
                    .build();

    car1.print();

    // No need to delete car1 as it is not dynamically allocated
    // delete &car1;

    return 0;
}