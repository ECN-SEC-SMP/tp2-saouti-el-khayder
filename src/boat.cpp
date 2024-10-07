#include "boat.hpp"

void Boat::start()
{
    std::cout << "Starting boat..." << std::endl;
    Vehicle::start();
}

void Boat::stop()
{
    std::cout << "Stopping boat..." << std::endl;
    Vehicle::stop();
}
