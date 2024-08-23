#include "Car.h"

using namespace std;

int main() {
    Car car1;
    cout << car1.toString() << endl;
    car1.startEngine();
    cout << car1.toString() << endl;

    return 0;
}