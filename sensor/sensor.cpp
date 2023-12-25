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
  //os << "motion occurred: " << +vfs.motion_occurred << std::endl;
  os << std::fixed << std::setprecision(2) << "motion: (" << +vfs.motion.x << ", " << +vfs.motion.x << ")" << std::endl;
  os << "surface quality: " << +vfs.surface_quality << " %" << std::endl;
  //os << "shutter speed: " << +vfs.shutter << std::endl;
  //os << "max pix: " << +vfs.max_pixel_value << std::endl;
  return os;
}

std::ostream &Sensor::operator<<(std::ostream &os, const TofCamera &tof_camera) {
  os << "image: {" << std::endl;
  for (int y = 0; y < 1; ++y) {
    for (int x = 0; x < 1; ++x) {
      os << std::setw(2) << std::setfill(' ') << +tof_camera.pixels.at(x).at(y) << ", ";
    }
    os <<"}" << std::endl;
  }
  return os;
}

std::ostream &Sensor::operator<<(std::ostream &os, const TofSpot &tof_spot) {
  os << "distance: " << std::dec << +tof_spot.distance << " mm; ";
  os << "error code: ";
  switch (tof_spot.error_code) {
    case TofSpotErrorCode::VALID_DATA:
      os << "VALID_DATA";
      break;
    case TofSpotErrorCode::VCSEL_SHORT:
      os << "VCSEL_SHORT";
      break;
    case TofSpotErrorCode::LOW_SIGNAL:
      os << "LOW_SIGNAL";
      break;
    case TofSpotErrorCode::LOW_SN:
      os << "LOW_SN";
      break;
    case TofSpotErrorCode::TOO_MUCH_AMB:
      os << "TOO_MUCH_AMB";
      break;
    case TofSpotErrorCode::WAF:
      os << "WAF";
      break;
    case TofSpotErrorCode::CAL_ERROR:
      os << "CAL_ERROR";
      break;
    case TofSpotErrorCode::CROSSTALK_ERROR:
      os << "CROSSTALK_ERROR";
      break;
  }
  return os;
}

std::ostream &Sensor::operator<<(std::ostream &os, const Sensor &sensor) {
  os << "IMU:" << std::endl;
  os << "\t" << sensor.imu;
  os << "VFS:" << std::endl;
  os << "\t" << sensor.vfs;
  os << "TOF-CAMERA:" << std::endl;
  os << "\t" << sensor.tof_cam;
  os << "TOF-SPOT:" << std::endl;
  os << "\t" << sensor.tof_spot;
  return os;
}
