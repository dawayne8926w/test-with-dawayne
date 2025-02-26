#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

 inline pros::Motor intake(2, pros::MotorGearset::green);
 inline pros::Motor conveyor(8, pros::MotorGearset::blue);
 inline pros::Motor wallstake(9, pros::MotorGearset::red);
 inline pros::ADIDigitalOut piston('a');