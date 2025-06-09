#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

 inline pros::Motor intake(20, pros::MotorGearset::blue);
 inline pros::ADIDigitalOut piston('a');