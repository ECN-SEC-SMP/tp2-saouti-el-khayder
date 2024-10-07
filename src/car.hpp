#ifndef CAR_HPP
#define CAR_HPP

#include "vehicle.hpp"

class Car : public Vehicle
{
public:
    Car(int maxSpeed = 0, int maxSeats = 1, int riders = 0) : Vehicle(maxSpeed, maxSeats, riders) {}

    void start() override;
    void stop() override;
};

#endif // CAR_HPP