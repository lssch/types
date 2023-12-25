//
// Created by Lars Schwarz on 12.12.2023.
//
#include <iomanip>
#include "data.h"

std::ostream &Data::operator<<(std::ostream &os, const Data &data) {
  os << std::fixed << std::setprecision(2) << "gyro calibration values: (" << data.imu.gyro_calibration_values.x << ", "
                                     << data.imu.gyro_calibration_values.y << ", "
                                     << data.imu.gyro_calibration_values.z  << ")" << std::endl;
  os << "distance positioning error: " << +data.distance_positioning_error << " mm" << std::endl;
  os << std::fixed << std::setprecision(3) << "position: (" << data.position.x << ", " << data.position.y << ") m" << std::endl;
  os << "velocity: (" << data.velocity.x << ", " << data.velocity.y << ") m/s" << std::endl;
  return os;
}

