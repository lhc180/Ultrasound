/*
 * Test.h
 * For testing the method Ping(), GetRangeInches(), and ~Ultrasonic().
 *
 *  Created on: Jan 26, 2015
 *      Author: Administrator
 */

#ifndef TEST_H_
#define TEST_H_

// INCLUDE FILES
#include "WPILib.h"

// VARIABLES
Ultrasonic ultrasound;

class Test {
public:
	// DEFINING TEST
	Test();
	virtual ~Test();

	// GETTING RANGE IN INCHES
	double GetValue();

	// RESETTING ULTRASOUND
	void Reset();

	// MAIN METHOD
	int main();


private:
	// PINGING
	void GoPing();
};

#endif /* TEST_H_ */
