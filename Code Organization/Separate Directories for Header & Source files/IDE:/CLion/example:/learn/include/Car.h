#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include <sstream>>

using namespace std;

class Car {
    private:
        string color;
        int speed;
        bool isEngineOn;
    public:
        Car();
        Car(string c);
        void acceleration();
        void applyBreak();
        int getSpeed();
        void startEngine();
        void stopEngine();
        string toString();
};



#endif //CAR_H
