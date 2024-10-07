#include "vehicle.hpp"

#include <stdexcept>

Vehicle::Vehicle(int maxSpeed, int maxSeats, int riders) : speed_(0), maxSpeed_(maxSpeed), maxSeats_(maxSeats), riders_(riders), state_(State::Off) {}

void Vehicle::breakdown(double state)
{
    if (state < 0.5)
        state_ = State::LightBreakdown;
    else
        state_ = State::SevereBreakdown;
}

std::string Vehicle::getState() const
{
    switch (state_)
    {
    case State::On:
        return "on";
    case State::Off:
        return "off";
    case State::LightBreakdown:
        return "light breakdown";
    case State::SevereBreakdown:
        return "severe breakdown";
    }

    return "invalid state";
}

void Vehicle::start()
{
    if (state_ != State::Off)
        throw std::invalid_argument("can't start vehicle, invalid state (" + getState() + ")");

    state_ = State::On;
}

void Vehicle::stop()
{
    state_ = State::Off;
}

void Vehicle::getIn(int count)
{
    int newCount = riders_ + count;

    if (newCount > maxSeats_)
        throw std::invalid_argument("max seats limit reached");

    riders_ = newCount;
}

void Vehicle::getDown(int count)
{
    if (count > riders_)
        throw std::invalid_argument("can't get down more than current riders");

    riders_ -= count;
}

void Vehicle::accelerate(int increment)
{
    int newSpeed = speed_ + increment;

    if (newSpeed > maxSpeed_)
        throw std::invalid_argument("can't go over max speed");
    if (newSpeed < 0)
        throw std::invalid_argument("speed can't be less than 0");

    speed_ = newSpeed;
}
