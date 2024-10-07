#include "car.hpp"
#include "boat.hpp"

int main()
{
    Car car(200, 4, 1);
    Boat boat(100, 8, 3);

    car.start();
    boat.start();

    car.stop();
    boat.stop();
}