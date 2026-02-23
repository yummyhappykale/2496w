#include "main.h"

/////
// For installation, upgrading, documentations, and tutorials, check out our website!
// https://ez-robotics.github.io/EZ-Template/
/////

const int DRIVE_SPEED = 127;
const int TURN_SPEED = 110;
const int SWING_SPEED = 110;
///
// Constants
///
void soloruiAWP() {
bottom.move(-127);
pros::delay(10);
chassis.pid_drive_set(50.5_in, 80);
chassis.pid_wait();
chassis.pid_turn_set(90_deg, 80);
chassis.pid_wait_quick_chain();
scraper.set(true);
chassis.pid_wait();
chassis.pid_drive_set(12.5_in, 40);
pros::delay(1200);
chassis.pid_drive_set(-29.5_in, 75);
pros::delay(700);
top.move(127);
pros::delay(900);
top.move(0);
scraper.set(false);
//see if this works took out delay here
chassis.pid_swing_set(ez::LEFT_SWING, 180_deg, SWING_SPEED);
chassis.pid_wait_quick_chain();
chassis.pid_turn_set(225_deg, 80);
chassis.pid_wait_quick_chain();
chassis.pid_drive_set(18_in, 90);
chassis.pid_wait_quick_chain();
chassis.pid_turn_set(180_deg, 90);
chassis.pid_wait();
// took our quick chain here chassis.pid_wait_quick_chain();
chassis.pid_drive_set(52.5_in, 90);
chassis.pid_wait();
scraper.set(true);
chassis.pid_turn_set(135_deg, 60);
chassis.pid_wait_quick_chain();
chassis.pid_drive_set(-12_in, 90);
middlegoal.set(true);
chassis.pid_wait_quick_chain();
top.move(50);
chassis.pid_wait_quick_chain();
// wait command here added
top.move(0);
chassis.pid_drive_set(52_in, 90);
chassis.pid_wait();
//middlegoal up here added
chassis.pid_turn_set(90_deg, 90);
pros::delay(100);
// scraper.set(true);
pros::delay(300);
middlegoal.set(false);
chassis.pid_drive_set(19_in, 45);
pros::delay(1100);
chassis.pid_drive_set(-29.8_in, 110);
pros::delay(600);
top.move(127);



}


void pushsawp() {
chassis.pid_drive_set(-2_in, 80);
chassis.pid_wait_quick_chain();
bottom.move(-127);
pros::delay(10);
chassis.pid_drive_set(52_in, 80);
chassis.pid_wait();
chassis.pid_turn_set(90_deg, 80);
chassis.pid_wait_quick_chain();
scraper.set(true);
chassis.pid_wait();
chassis.pid_drive_set(12_in, 40);
pros::delay(1200);
chassis.pid_drive_set(-29.5_in, 75);
pros::delay(700);
top.move(127);
pros::delay(750);
top.move(0);
scraper.set(false);
//see if this works took out delay here
chassis.pid_swing_set(ez::LEFT_SWING, 180_deg, SWING_SPEED);
chassis.pid_wait_quick_chain();
chassis.pid_turn_set(225_deg, 80);
chassis.pid_wait_quick_chain();
chassis.pid_drive_set(18_in, 90);
chassis.pid_wait_quick_chain();
chassis.pid_turn_set(180_deg, 90);
chassis.pid_wait();
// took our quick chain here chassis.pid_wait_quick_chain();
chassis.pid_drive_set(52_in, 90);
chassis.pid_wait();
chassis.pid_turn_set(135_deg, 60);
chassis.pid_wait_quick_chain();
chassis.pid_drive_set(-13.000000000009_in, 80);
pros::delay(100);
middlegoal.set(true);
chassis.pid_wait_quick_chain();
//quickchgain removed
top.move(30);
pros::delay(350);
// wait command here added
top.move(0);
chassis.pid_drive_set(51.5_in, 90);
chassis.pid_wait();
//middlegoal up here added
chassis.pid_turn_set(90_deg, 90);
pros::delay(100);
scraper.set(true);
pros::delay(300);
middlegoal.set(false);
chassis.pid_drive_set(19_in, 40);
pros::delay(1200);
chassis.pid_drive_set(-30_in, 110);
pros::delay(600);
top.move(127);


  
}

void ruiright() {
 bottom.move(-127);
 chassis.pid_drive_set(10_in, 80);
 chassis.pid_wait();
 chassis.pid_turn_set(16_deg, 90);
 pros::delay(750);
 chassis.pid_drive_set(17_in, 35);
 //pick up first 3 balls
 pros::delay(1000);
 chassis.pid_turn_set(115_deg, 60);
 pros::delay(1000);
 chassis.pid_drive_set(30.5_in, 80);
 //drive back
  chassis.pid_wait();
   chassis.pid_wait();
 chassis.pid_turn_set(180_deg, 80);
 chassis.pid_wait();
  chassis.pid_wait();
 scraper.set(true);
 chassis.pid_wait();
  chassis.pid_wait();
 chassis.pid_drive_set(24.5_in, 35);
 pros::delay(2000);
 chassis.pid_drive_set(-30_in, 80);
 chassis.pid_wait();
 top.move(127);
 pros::delay(1500);
 chassis.pid_drive_set(14_in, 80);
 pros::delay(750);
 chassis.pid_turn_set(135_deg, TURN_SPEED);
 pros::delay(600);
 chassis.pid_drive_set(-13.5_in, 80);
 pros::delay(500);
 chassis.pid_turn_set(180_deg, TURN_SPEED);
 pros::delay(500);
 //descore
 chassis.pid_drive_set(-22_in, 70);
 pros::delay(500);
 scraper.set(false);
}


void ruileft () {
 bottom.move(-127);
 //have time to go for other balls since its front to back
 chassis.pid_drive_set(12_in, 80);
 chassis.pid_wait();
 chassis.pid_turn_set(340_deg, TURN_SPEED);
 pros::delay(725);
 chassis.pid_drive_set(22_in, 50);
 //intake first 3
 pros::delay(725);
 chassis.pid_turn_set(225_deg, TURN_SPEED);
 //align to drive back
 pros::delay(725);
 chassis.pid_drive_set(34.5_in, 80);
 //drive back
 chassis.pid_wait();
 chassis.pid_turn_set(180_deg, TURN_SPEED);
 pros::delay(500);
 scraper.set(true);
 pros::delay(500);
 //matchload
 chassis.pid_drive_set(21_in, 50);
 pros::delay(2000);
 chassis.pid_drive_set(-31_in, 75);
 //drive foward score
 pros::delay(1250);
 top.move(127);
 pros::delay(1500);
 chassis.pid_drive_set(14_in, 80);
 //backup
 pros::delay(250);
 chassis.pid_turn_set(135_deg, TURN_SPEED);
 //align to goal
 pros::delay(500);
 chassis.pid_drive_set(-10.5_in, 80);
 pros::delay(400);
 chassis.pid_turn_set(180_deg, TURN_SPEED);
 pros::delay(500);
 //descore
 chassis.pid_drive_set(-22_in, 70);
 pros::delay(500);
 scraper.set(false);

}



void skills () {
chassis.slew_drive_set(false);  // Disables global slew
chassis.slew_drive_constants_set(5_in, 30); 
bottom.move(-127);
chassis.pid_wait_quick_chain();
chassis.pid_drive_set(50_in, 80);
chassis.pid_wait();
chassis.pid_turn_set(90_deg, 70);
chassis.pid_wait();
scraper.set(true);
chassis.pid_wait_quick_chain();
chassis.pid_drive_set(12_in, 50, true);  // Slew will be enabled for this motion
pros::delay(2000);
chassis.pid_drive_set(-10_in, 80);
chassis.pid_wait_quick_chain();
scraper.set(false);
chassis.pid_wait_quick_chain();
descore.set(true);
chassis.pid_wait_quick_chain();
chassis.pid_turn_set(0_deg, 70);
chassis.pid_wait();
chassis.pid_drive_set(12_in, 80);
chassis.pid_wait();
chassis.pid_turn_set(270_deg, 70);
chassis.pid_wait();
chassis.pid_drive_set(82_in, 80);
chassis.pid_wait();
chassis.pid_turn_set(315_deg, 70);
chassis.pid_wait();
chassis.pid_drive_set(-18_in, 80);
chassis.pid_wait();
chassis.pid_turn_set(270_deg, 70);
chassis.pid_wait();
chassis.pid_drive_set(-18_in, 80);
chassis.pid_wait();
top.move(127);
pros::delay(100);
bottom.move(127);
pros::delay(150);
bottom.move(-127);
pros::delay(1250);
top.move(0);
scraper.set(true);
chassis.pid_drive_set(32_in, 50, true);
pros::delay(2000);
chassis.pid_drive_set(-32_in, 50);
chassis.pid_wait();
top.move(127);
pros::delay(100);
bottom.move(127);
pros::delay(150);
bottom.move(-127);
pros::delay(1250);
top.move(0);
chassis.pid_drive_set(15_in, 80);
chassis.pid_wait();
chassis.pid_turn_set(0_deg, 70);
chassis.pid_wait();
chassis.pid_drive_set(-80_in, 80);
}


void drive1 () {

  chassis.pid_drive_set(3_in,80);
}


void rushright () {
  bottom.move(-127);
 chassis.pid_drive_set(10_in, 80);
 chassis.pid_wait();
 chassis.pid_turn_set(20_deg, 90);
 pros::delay(750);
 chassis.pid_drive_set(15_in, 70);
  pros::delay(500);
  scraper.set(true);
 //pick up first 3 balls
 chassis.pid_wait();
 chassis.pid_turn_set(115_deg, 60);
 chassis.pid_wait();
 chassis.pid_drive_set(30_in, 82);
 //drive back
  chassis.pid_wait();
 chassis.pid_turn_set(180_deg, 80);
 chassis.pid_wait();
 chassis.pid_drive_set(-15_in, 80);
  chassis.pid_wait();
  top.move(127);
 pros::delay(900);
 chassis.pid_drive_set(14_in, 80);
 pros::delay(650);
 chassis.pid_turn_set(135_deg, TURN_SPEED);
 pros::delay(550);
 chassis.pid_drive_set(-13.5_in, 80);
 pros::delay(450);
 chassis.pid_turn_set(180_deg, TURN_SPEED);
 pros::delay(450);
 //descore
 chassis.pid_drive_set(-22.5_in, 70);
  chassis.pid_wait();
  chassis.drive_brake_set(MOTOR_BRAKE_HOLD);
}

void bringleiscool () {
 bottom.move(-127);
 //have time to go for other balls since its front to back
 chassis.pid_drive_set(12_in, 80);
 chassis.pid_wait();
 chassis.pid_turn_set(335_deg, TURN_SPEED);
 chassis.pid_wait_quick_chain();
 chassis.pid_drive_set(17_in, 50);
  pros::delay(500);
  scraper.set(true);
 //pick up first 3 balls
 chassis.pid_wait();
  chassis.pid_turn_set(225_deg, TURN_SPEED);
chassis.pid_wait();
chassis.pid_drive_set(-15_in, 50);
pros::delay(300);
  middlegoal.set(true);
chassis.pid_wait_quick_chain();
top.move(50);
chassis.pid_wait_quick_chain();
// wait command here added
top.move(0);
chassis.pid_drive_set(52.3_in, 70);
chassis.pid_wait();
middlegoal.set(false);
//middle goal up
chassis.pid_turn_set(180_deg, TURN_SPEED);
  chassis.pid_wait();
  chassis.pid_drive_set(10.5_in, 60);
  pros::delay(950);
    chassis.pid_drive_set(-30_in, 70);
 pros::delay(700);
top.move(127);
 pros::delay(1000);
  chassis.pid_drive_set(13.2_in, 80);
 //backup
 pros::delay(250);
 chassis.pid_turn_set(135_deg, TURN_SPEED);
 //align to goal
 pros::delay(500);
 chassis.pid_drive_set(-10.5_in, 80);
 pros::delay(400);
 chassis.pid_turn_set(180_deg, TURN_SPEED);
 pros::delay(500);
 //descore
 chassis.pid_drive_set(-22_in, 70);
chassis.pid_wait();
  chassis.drive_brake_set(MOTOR_BRAKE_HOLD);

}


void balright() {
bottom.move(-127);
 pros::delay(10);
// chassis.pid_drive_set(40_in, 80);
// chassis.pid_wait();
// chassis.slew_swing_set(true);  // Enables global slew
// chassis.slew_swing_constants_set(5_deg, 50);

// // Over the first 5 degrees, the robot will ramp the speed limit from 50 to 110 
// chassis.pid_swing_set(ez::LEFT_SWING, 90_deg, 110);
// chassis.pid_wait_quick_chain();
// chassis.pid_drive_set(10_in, 80);
// scraper.set(true);
bottom.move(-127);
 pros::delay(10);
 chassis.pid_swing_set(ez::LEFT_SWING, 90_deg, SWING_SPEED, 64);
  chassis.pid_wait();
  chassis.pid_drive_set(5_in, 70);
   chassis.pid_wait();
 scraper.set(true);
  scraper.set(false);
  chassis.pid_wait();
 chassis.pid_swing_set(ez::LEFT_SWING, 0_deg, SWING_SPEED, 20);
  chassis.pid_wait();
  chassis.pid_swing_set(ez::LEFT_SWING, 270_deg, SWING_SPEED, 15);
   chassis.pid_wait();
  chassis.pid_drive_set(-9_in, 70);
 chassis.pid_wait();
  chassis.pid_swing_set(ez::LEFT_SWING, 179_deg, SWING_SPEED, 10);
 chassis.pid_wait();
  top.move(127);
   chassis.pid_wait();
 chassis.pid_drive_set(30_in, 70);
}

void default_constants() {
  // P, I, D, and Start I
  chassis.pid_drive_constants_set(18.0, 0.0, 150.0);         // Fwd/rev constants, used for odom and non odom motions // 20, 0, 150
  chassis.pid_heading_constants_set(11.0, 0.0, 20.0);        // Holds the robot straight while going forward without odom
  chassis.pid_turn_constants_set(3.0, 0.05, 20.0, 15.0);     // Turn in place constants
  chassis.pid_swing_constants_set(6.0, 0.0, 65.0);           // Swing constants
  chassis.pid_odom_angular_constants_set(6.5, 0.0, 52.5);    // Angular control for odom motions
  chassis.pid_odom_boomerang_constants_set(5.8, 0.0, 32.5);  // Angular control for boomerang motions

  // Exit conditions
  chassis.pid_turn_exit_condition_set(65_ms, 3_deg, 250_ms, 7_deg, 500_ms, 500_ms);
  chassis.pid_swing_exit_condition_set(65_ms, 3_deg, 250_ms, 7_deg, 500_ms, 500_ms);
  chassis.pid_drive_exit_condition_set(65_ms, 1_in, 250_ms, 3_in, 500_ms, 500_ms);
  chassis.pid_swing_chain_constant_set(5_deg);
  chassis.pid_drive_chain_constant_set(3_in);

  // Slew constants
  chassis.slew_turn_constants_set(3_deg, 70);
  chassis.slew_drive_constants_set(3_in, 70);
  chassis.slew_swing_constants_set(3_in, 80);

  // The amount that turns are prioritized over driving in odom motions
  // - if you have tracking wheels, you can run this higher.  1.0 is the max
  chassis.odom_turn_bias_set(0.9);

  chassis.odom_look_ahead_set(7_in);           // This is how far ahead in the path the robot looks at
  chassis.odom_boomerang_distance_set(16_in);  // This sets the maximum distance away from target that the carrot point can be
  chassis.odom_boomerang_dlead_set(0.625);     // This handles how aggressive the end of boomerang motions are

  chassis.pid_angle_behavior_set(ez::shortest);  // Changes the default behavior for turning, this defaults it to the shortest path there
}

///
// Drive Example
///
void drive_example() {
  // The first parameter is target inches
  // The second parameter is max speed the robot will drive at
  // The third parameter is a boolean (true or false) for enabling/disabling a slew at the start of drive motions
  // for slew, only enable it when the drive distance is greater than the slew distance + a few inches

  chassis.pid_drive_set(24_in, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_turn_set(90_deg, TURN_SPEED);
}




///
// Turn Example
///
void turn_example() {
  // The first parameter is the target in degrees
  // The second parameter is max speed the robot will drive at

  chassis.pid_turn_set(90_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_turn_set(45_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_turn_set(0_deg, TURN_SPEED);
  chassis.pid_wait();
}

///
// Combining Turn + Drive
///
void drive_and_turn() {
  chassis.pid_drive_set(24_in, DRIVE_SPEED, true);
  chassis.pid_wait();

  chassis.pid_turn_set(45_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_turn_set(-45_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_turn_set(0_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(-24_in, DRIVE_SPEED, true);
  chassis.pid_wait();
}

///
// Wait Until and Changing Max Speed
///
void wait_until_change_speed() {
  // pid_wait_until will wait until the robot gets to a desired position

  // When the robot gets to 6 inches slowly, the robot will travel the remaining distance at full speed
  chassis.pid_drive_set(24_in, 30, true);
  chassis.pid_wait_until(6_in);
  chassis.pid_speed_max_set(DRIVE_SPEED);  // After driving 6 inches at 30 speed, the robot will go the remaining distance at DRIVE_SPEED
  chassis.pid_wait();

  chassis.pid_turn_set(45_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_turn_set(-45_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_turn_set(0_deg, TURN_SPEED);
  chassis.pid_wait();

  // When the robot gets to -6 inches slowly, the robot will travel the remaining distance at full speed
  chassis.pid_drive_set(-24_in, 30, true);
  chassis.pid_wait_until(-6_in);
  chassis.pid_speed_max_set(DRIVE_SPEED);  // After driving 6 inches at 30 speed, the robot will go the remaining distance at DRIVE_SPEED
  chassis.pid_wait();
}

///
// Swing Example
///
void swing_example() {
  // The first parameter is ez::LEFT_SWING or ez::RIGHT_SWING
  // The second parameter is the target in degrees
  // The third parameter is the speed of the moving side of the drive
  // The fourth parameter is the speed of the still side of the drive, this allows for wider arcs

  chassis.pid_swing_set(ez::LEFT_SWING, 45_deg, SWING_SPEED, 45);
  chassis.pid_wait();

  chassis.pid_swing_set(ez::RIGHT_SWING, 0_deg, SWING_SPEED, 45);
  chassis.pid_wait();

  chassis.pid_swing_set(ez::RIGHT_SWING, 45_deg, SWING_SPEED, 45);
  chassis.pid_wait();

  chassis.pid_swing_set(ez::LEFT_SWING, 0_deg, SWING_SPEED, 45);
  chassis.pid_wait();
}

///
// Motion Chaining
///
void motion_chaining() {
  // Motion chaining is where motions all try to blend together instead of individual movements.
  // This works by exiting while the robot is still moving a little bit.
  // To use this, replace pid_wait with pid_wait_quick_chain.
  chassis.pid_drive_set(24_in, DRIVE_SPEED, true);
  chassis.pid_wait();

  chassis.pid_turn_set(45_deg, TURN_SPEED);
  chassis.pid_wait_quick_chain();

  chassis.pid_turn_set(-45_deg, TURN_SPEED);
  chassis.pid_wait_quick_chain();

  chassis.pid_turn_set(0_deg, TURN_SPEED);
  chassis.pid_wait();

  // Your final motion should still be a normal pid_wait
  chassis.pid_drive_set(-24_in, DRIVE_SPEED, true);
  chassis.pid_wait();
}

///
// Auto that tests everything
///
void combining_movements() {
  chassis.pid_drive_set(24_in, DRIVE_SPEED, true);
  chassis.pid_wait();

  chassis.pid_turn_set(45_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_swing_set(ez::RIGHT_SWING, -45_deg, SWING_SPEED, 45);
  chassis.pid_wait();

  chassis.pid_turn_set(0_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(-24_in, DRIVE_SPEED, true);
  chassis.pid_wait();
}

///
// Interference example
///
void tug(int attempts) {
  for (int i = 0; i < attempts - 1; i++) {
    // Attempt to drive backward
    printf("i - %i", i);
    chassis.pid_drive_set(-12_in, 127);
    chassis.pid_wait();

    // If failsafed...
    if (chassis.interfered) {
      chassis.drive_sensor_reset();
      chassis.pid_drive_set(-2_in, 20);
      pros::delay(1000);
    }
    // If the robot successfully drove back, return
    else {
      return;
    }
  }
}

// If there is no interference, the robot will drive forward and turn 90 degrees.
// If interfered, the robot will drive forward and then attempt to drive backward.
void interfered_example() {
  chassis.pid_drive_set(24_in, DRIVE_SPEED, true);
  chassis.pid_wait();

  if (chassis.interfered) {
    tug(3);
    return;
  }

  chassis.pid_turn_set(90_deg, TURN_SPEED);
  chassis.pid_wait();
}

///
// Odom Drive PID
///
void odom_drive_example() {
  // This works the same as pid_drive_set, but it uses odom instead!
  // You can replace pid_drive_set with pid_odom_set and your robot will
  // have better error correction.

  chassis.pid_odom_set(24_in, DRIVE_SPEED, true);
  chassis.pid_wait();

  chassis.pid_odom_set(-12_in, DRIVE_SPEED);
  chassis.pid_wait();

  chassis.pid_odom_set(-12_in, DRIVE_SPEED);
  chassis.pid_wait();
}

///
// Odom Pure Pursuit
///
void odom_pure_pursuit_example() {
  // Drive to 0, 30 and pass through 6, 10 and 0, 20 on the way, with slew
  chassis.pid_odom_set({{{6_in, 10_in}, fwd, DRIVE_SPEED},
                        {{0_in, 20_in}, fwd, DRIVE_SPEED},
                        {{0_in, 30_in}, fwd, DRIVE_SPEED}},
                       true);
  chassis.pid_wait();

  // Drive to 0, 0 backwards
  chassis.pid_odom_set({{0_in, 0_in}, rev, DRIVE_SPEED},
                       true);
  chassis.pid_wait();
}

///
// Odom Pure Pursuit Wait Until
///
void odom_pure_pursuit_wait_until_example() {
  chassis.pid_odom_set({{{0_in, 24_in}, fwd, DRIVE_SPEED},
                        {{12_in, 24_in}, fwd, DRIVE_SPEED},
                        {{24_in, 24_in}, fwd, DRIVE_SPEED}},
                       true);
  chassis.pid_wait_until_index(1);  // Waits until the robot passes 12, 24
  // Intake.move(127);  // Set your intake to start moving once it passes through the second point in the index
  chassis.pid_wait();
  // Intake.move(0);  // Turn the intake off
}

///
// Odom Boomerang
///
void odom_boomerang_example() {
  chassis.pid_odom_set({{0_in, 24_in, 45_deg}, fwd, DRIVE_SPEED},
                       true);
  chassis.pid_wait();

  chassis.pid_odom_set({{0_in, 0_in, 0_deg}, rev, DRIVE_SPEED},
                       true);
  chassis.pid_wait();
}

///
// Odom Boomerang Injected Pure Pursuit
///
void odom_boomerang_injected_pure_pursuit_example() {
  chassis.pid_odom_set({{{0_in, 24_in, 45_deg}, fwd, DRIVE_SPEED},
                        {{12_in, 24_in}, fwd, DRIVE_SPEED},
                        {{24_in, 24_in}, fwd, DRIVE_SPEED}},
                       true);
  chassis.pid_wait();

  chassis.pid_odom_set({{0_in, 0_in, 0_deg}, rev, DRIVE_SPEED},
                       true);
  chassis.pid_wait();
}

///
// Calculate the offsets of your tracking wheels
///
void measure_offsets() {
  // Number of times to test
  int iterations = 10;

  // Our final offsets
  double l_offset = 0.0, r_offset = 0.0, b_offset = 0.0, f_offset = 0.0;

  // Reset all trackers if they exist
  if (chassis.odom_tracker_left != nullptr) chassis.odom_tracker_left->reset();
  if (chassis.odom_tracker_right != nullptr) chassis.odom_tracker_right->reset();
  if (chassis.odom_tracker_back != nullptr) chassis.odom_tracker_back->reset();
  if (chassis.odom_tracker_front != nullptr) chassis.odom_tracker_front->reset();
  
  for (int i = 0; i < iterations; i++) {
    // Reset pid targets and get ready for running an auton
    chassis.pid_targets_reset();
    chassis.drive_imu_reset();
    chassis.drive_sensor_reset();
    chassis.drive_brake_set(MOTOR_BRAKE_HOLD);
    chassis.odom_xyt_set(0_in, 0_in, 0_deg);
    double imu_start = chassis.odom_theta_get();
    double target = i % 2 == 0 ? 90 : 270;  // Switch the turn target every run from 270 to 90

    // Turn to target at half power
    chassis.pid_turn_set(target, 63, ez::raw);
    chassis.pid_wait();
    pros::delay(250);

    // Calculate delta in angle
    double t_delta = util::to_rad(fabs(util::wrap_angle(chassis.odom_theta_get() - imu_start)));

    // Calculate delta in sensor values that exist
    double l_delta = chassis.odom_tracker_left != nullptr ? chassis.odom_tracker_left->get() : 0.0;
    double r_delta = chassis.odom_tracker_right != nullptr ? chassis.odom_tracker_right->get() : 0.0;
    double b_delta = chassis.odom_tracker_back != nullptr ? chassis.odom_tracker_back->get() : 0.0;
    double f_delta = chassis.odom_tracker_front != nullptr ? chassis.odom_tracker_front->get() : 0.0;

    // Calculate the radius that the robot traveled
    l_offset += l_delta / t_delta;
    r_offset += r_delta / t_delta;
    b_offset += b_delta / t_delta;
    f_offset += f_delta / t_delta;
  }

  // Average all offsets
  l_offset /= iterations;
  r_offset /= iterations;
  b_offset /= iterations;
  f_offset /= iterations;

  // Set new offsets to trackers that exist
  if (chassis.odom_tracker_left != nullptr) chassis.odom_tracker_left->distance_to_center_set(l_offset);
  if (chassis.odom_tracker_right != nullptr) chassis.odom_tracker_right->distance_to_center_set(r_offset);
  if (chassis.odom_tracker_back != nullptr) chassis.odom_tracker_back->distance_to_center_set(b_offset);
  if (chassis.odom_tracker_front != nullptr) chassis.odom_tracker_front->distance_to_center_set(f_offset);
}

// . . .
// Make your own autonomous functions here!
// . . .