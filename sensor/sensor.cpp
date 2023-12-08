//
// Created by Lars Schwarz on 05.12.2023.
//

#include "sensor.h"
#include <iomanip>

std::ostream &Sensor::operator<<(std::ostream &os, const Imu &imu) {
  os << std::fixed << std::setprecision(2) << "accel: (" << imu.accelerometer.x << ", "
                                                         << imu.accelerometer.y << ", "
                                                         << imu.accelerometer.z  << "); gyro: ("
                                                         << imu.gyroscope.x << ", "
                                                         << imu.gyroscope.y << ", "
                                                         << imu.gyroscope.z << "); temp: "
                                                         << imu.temperature << " C";
  return os;
}

std::ostream &Sensor::operator<<(std::ostream &os, const Vfs &vfs) {
  os << std::fixed << std::setprecision(2) << "motion: (" << vfs.motion.dx << ", " << vfs.motion.dy << "); surface quality: " << vfs.surface_quality;
  return os;
}

std::ostream &Sensor::operator<<(std::ostream &os, const TofCamera &tof_camera) {
  os << "Image: ";
  for (int y = 0; y < 5; ++y) {
    for (int x = 0; x < 5; ++x) {
      os << std::setw(2) << std::setfill(' ') << +tof_camera.image.at(x).at(y) << ", ";
    }
    os << std::endl;
  }
  return os;
}

std::ostream &Sensor  ::operator<<(std::ostream &os, const TofSpot &tof_spot) {
  os << "Distance: " << tof_spot.distance << " mm";
  return os;
}

std::ostream &Sensor::operator<<(std::ostream &os, const Sensor &sensor) {
  os << "IMU:" << std::endl;
  os << "\t" << sensor.imu;
  os << "VFS:" << std::endl;
  os << "\t" << sensor.vsf;
  os << "TOF-CAMERA:" << std::endl;
  os << "\t" << sensor.tof_cam;
  os << "TOF-SPOT:" << std::endl;
  os << "\t" << sensor.tof_spot;
  return os;
}
