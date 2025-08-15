# FACTORY DESIGN #

### Scenario of the problem ###

Imagine a factory where different kinds of vehicles are to be made. (e.g. Car, Bike, Truck)

The main code requires you to initate these vehicles multiple times at different places. 

Since there are different types, so you gotta initiate according to the required type, again and again manually in the main code. (see withoutFactory.cpp) 

So, we make a factory template handling the vehicle type in a centralized manner in the creation class itself. So now we just need to instantiate the class by passing string with required vehicle, and all the creational type will be handle! (see factory.cpp)
