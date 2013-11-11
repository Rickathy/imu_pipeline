//=====================================================================================================
// MadgwickAHRS.h
//=====================================================================================================
//
// Implementation of Madgwick's IMU and AHRS algorithms.
// See: http://www.x-io.co.uk/node/8#open_source_ahrs_and_imu_algorithms
//
// Date			Author          Notes
// 29/09/2011	SOH Madgwick  Initial release
// 02/10/2011	SOH Madgwick  Optimised for reduced CPU load
// 19/02/2012	SOH Madgwick  Magnetometer measurement is normalised
// 11/11/2013 Dereck Wonnacott <dereck@gmail.com> Variable sampleFreq
//
//=====================================================================================================
#ifndef MadgwickAHRS_h
#define MadgwickAHRS_h

//---------------------------------------------------------------------------------------------------
// Definitions

#define DEFAULT_SAMPLE_FREQUENCY	512.0f		// sample frequency in Hz
#define betaDef		0.1f		// 2 * proportional gain

//----------------------------------------------------------------------------------------------------
// Variable declaration

extern volatile float sampleFreq;	// sample frequency in Hz
extern volatile float beta;				// algorithm gain
extern volatile float q0, q1, q2, q3;	// quaternion of sensor frame relative to auxiliary frame

//---------------------------------------------------------------------------------------------------
// Function declarations

void MadgwickAHRSupdate(float gx, float gy, float gz, float ax, float ay, float az, float mx, float my, float mz);
void MadgwickAHRSupdateIMU(float gx, float gy, float gz, float ax, float ay, float az);

#endif
//=====================================================================================================
// End of file
//=====================================================================================================
