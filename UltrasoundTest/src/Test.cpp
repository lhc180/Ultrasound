/*
 * Test.cpp
 * For testing the method Ping(), GetRangeInches(), and ~Ultrasonic().
 *
 *  Created on: Jan 26, 2015
 *      Author: Administrator
 */

// INCLUDE FILES
#include "Test.h"
#include "WPILib.h"

// VARIABLES
Ultrasonic ultrasound;

// DEFINING TEST
Test::Test() {
	// TODO Auto-generated constructor stub
}
Test::~Test() {
	// TODO Auto-generated destructor stub
}

// PINGING
void GoPing() {
	ultrasound.Ping();
	// Wait(0.1); // wait for the ping to return
}

// GETTING RANGE IN INCHES
double GetValue() {
	GoPing();
	double range = ultrasound.GetRangeInches();
	return range;
}

void Reset() {
	ultrasound.~Ultrasonic();
}

// MAIN METHOD
int main() {
	ultrasound(1,2); // initialize with ULTRASONIC_PING=1 AND ULTRASONIC_ECHO=2
	ultrasound.SetAutomaticMode(false);
	std::cout << GetValue() + "\n";

	return 0;
}
