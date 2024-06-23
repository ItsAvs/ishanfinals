#ifndef MYLIB_CONSTANTS_H
#define MYLIB_CONSTANTS_H

using namespace pros;
//Purpose: Create Global Port Constants for Hardware Connection
namespace PortConstants
{
  //constants
  
}

namespace Objects 
{
  Motor first (1, v5::MotorGears::green, v5::MotorUnits::rotations);
  Motor second (2, v5::MotorGears::green, v5::MotorUnits::rotations);
  Motor third (-3, v5::MotorGears::green, v5::MotorUnits::rotations);
  Motor fourth (-4, v5::MotorGears::green, v5::MotorUnits::rotations);
  IMU imu(5);

}
#endif

