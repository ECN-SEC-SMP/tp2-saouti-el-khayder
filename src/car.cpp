#include "car.hpp"

void Car::start()
{
    std::cout << "Starting car..." << std::endl;
    Vehicle::start();
}

void Car::stop()
{
    std::cout << "Stopping car..." << std::endl;
    Vehicle::stop();
}
