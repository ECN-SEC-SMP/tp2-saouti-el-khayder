#ifndef BOAT_HPP
#define BOAT_HPP

#include "vehicle.hpp"

class Boat : public Vehicle
{
public:
    Boat(int maxSpeed = 0, int maxSeats = 1, int riders = 0) : Vehicle(maxSpeed, maxSeats, riders) {}

    void start() override;
    void stop() override;
};

#endif // BOAT_HPP