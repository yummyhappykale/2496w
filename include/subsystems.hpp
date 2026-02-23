#pragma once


#include "EZ-Template/api.hpp"
#include "api.h"


extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples


// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');
inline pros::Motor bottom(1);
inline pros::Motor top(2);



inline ez::Piston descore('A');

//B no work
inline ez::Piston middlegoal('C');
inline ez::Piston scraper('D');
inline ez::Piston park('H');





inline pros::MotorGroup intake({1}); //all the intake (spins the right way for scoring)
inline pros::MotorGroup bottomhalf({-2});