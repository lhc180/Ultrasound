/**
 * UltrasonicSensor
 * Read from an ultrasonic sensor and display values onto the smart dashboard.
 */

// include files
#include "WPILib.h"
#include "NetworkTables/NetworkTable.h"

class Robot: public SampleRobot
{
	Ultrasonic ultrasonicsensor; // ultrasonic sensor
	const double kUpdatePeriod = 0.25; // 1/4 second

public:
	Robot() : ultrasonicsensor(1,2)
	{
		ultrasonicsensor.SetAutomaticMode(false);
	}

	void OperatorControl() {
		while (IsOperatorControl() && IsEnabled())
		{
			// reading values
			ultrasonicsensor.Ping();
			Wait(0.1); // wait for ping to return
			double range = ultrasonicsensor.GetRangeInches();
			SmartDashboard::PutNumber(ultrasonicsensor.GetSmartDashboardType(), range);

			// wait a short bit before updating again
			Wait(kUpdatePeriod);
		}
	}
};

START_ROBOT_CLASS(Robot);
