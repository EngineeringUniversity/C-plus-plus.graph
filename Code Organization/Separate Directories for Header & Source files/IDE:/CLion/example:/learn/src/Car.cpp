#include "Car.h"

string Car::toString() {
    ostringstream oss;
    oss << color << endl;
    oss << speed << endl;
    if (isEngineOn) {
        oss << "Engine is on" << endl;
    } else {
        oss << "Engine is off" << endl;
    }
    return oss.str();
}

Car::Car() {
    color = "Blue";
    speed = 0;
    isEngineOn = false;
}

Car::Car(string c) {
    color = c;
    speed = 0;
    isEngineOn = false;
}

void Car::acceleration() {
    speed += 10;
}

void Car::applyBreak() {
    if (speed - 8 >= 0)
        speed -= 8;
    else
        speed = 0;
}

int Car::getSpeed() {
    return speed;
}

void Car::startEngine() {
    if (!isEngineOn) {
        isEngineOn = true;
    }
}

void Car::stopEngine() {
    if (isEngineOn) {
        isEngineOn = false;
        speed = 0;
    }
}
