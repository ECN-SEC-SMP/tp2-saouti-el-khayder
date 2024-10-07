//
//  Vehicle.hpp
//  TP_HM_Exc
//
//  Created by Myriam Servières le 28/11/2021, et traduit par EL KHAYDER Zakaria le 07/10/2024.
//

#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <iostream>

class Vehicle
{

public:
    enum class State
    {
        Off,
        On,
        LightBreakdown,
        SevereBreakdown
    };

    Vehicle(int maxSpeed = 0, int maxSeats = 1, int riders = 0);

    virtual void start();

    // virtual void stop();

    // virtual void troubleshoot();

    virtual void accelerate(int increment);

    virtual void getIn(int nbOcc);

    virtual void getDown(int nbOcc);

    virtual void breakdown(double state);

    virtual std::string getState() const;

    // virtual ~Vehicle();
    // friend std::ostream &operator<<(std::ostream &s, Vehicle const &v);

protected:
    int speed_;
    int maxSpeed_;
    int maxSeats_;
    int riders_;
    State state_;
};

// opérateur d'affichage
// std::ostream &operator<<(std::ostream &s, Vehicle const &v);

#endif /* Vehicule_hpp */