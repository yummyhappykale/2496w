#pragma once


#include "EZ-Template/api.hpp"
#include "api.h"


extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples


// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');
inline pros::Motor bottom(5);
inline pros::Motor top2(-10);
inline pros::Motor top(0);




inline pros::Motor intake(8);




inline ez::Piston claw('A', false);
inline ez::Piston clawTilt('C', false);
inline ez::Piston Iain_kim('B',true);

inline ez::Piston scraper('D',true);
inline ez::Piston descore('E',true);
inline ez::Piston middlegoal('F',true);
//heloo

inline pros::Rotation liftRotation(4);
inline pros::MotorGroup lift({7,9}); 
inline pros::MotorGroup aktoggle({-5,15}); 

//distance sensor right is 5 
// 

//all the intake (spins the right way for scoring)


