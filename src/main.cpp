#include "vehicle.hpp"

int main()
{
    Vehicle v(100, 4, 1);

    v.start();        // This is not supposed to throw
    v.breakdown(0.5); // Introduce breakdown

    try
    {
        v.start(); // This is supposed to throw
    }
    catch (std::invalid_argument &e)
    {
        std::cout << "Error starting vehicle: " << e.what() << std::endl;
    }

    v.accelerate(80); // This will not throw

    try
    {
        v.accelerate(80); // This will throw since we are exceding the amx speed of 100
    }
    catch (std::invalid_argument &e)
    {
        std::cout << "Error accelerating vehicle: " << e.what() << std::endl;
    }

    try
    {
        v.accelerate(-100); // This will throw since we are going under 0
    }
    catch (std::invalid_argument &e)
    {
        std::cout << "Error accelerating vehicle: " << e.what() << std::endl;
    }

    v.getIn(3); // This will not throw

    try
    {
        v.getIn(10); // This will throw since we are exceeding 4 riders
    }
    catch (std::invalid_argument &e)
    {
        std::cout << "Error adding riders: " << e.what() << std::endl;
    }

    v.getDown(3); // This will not throw

    try
    {
        v.getDown(10); // This will throw since we only have one rider left
    }
    catch (std::invalid_argument &e)
    {
        std::cout << "Error removing riders: " << e.what() << std::endl;
    }
}