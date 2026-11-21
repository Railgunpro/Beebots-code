#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::adi::DigitalIn limit_switch('A');
inline pros::MotorGroup lift1({1,-10});
inline pros::MotorGroup lift2({3,-9});
//inline ez::Piston clar('A');
inline pros::adi::DigitalOut clar('C');