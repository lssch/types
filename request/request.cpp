//
// Created by Lars Schwarz on 10.12.2023.
//

#include "request.h"

std::ostream &Request::operator<<(std::ostream &os, const Request& request) {
  os << "mode: ";
  switch (request.operating_mode) {
    case OperatingMode::MANUAL:
      os << "MANUAL";
      break;
    case OperatingMode::ASSISTED:
      os << "ASSISTED";
      break;
    case OperatingMode::DISTANCE:
      os << "DISTANCE";
      break;
    case OperatingMode::AUTONOMOUS:
      os << "AUTONOMOUS";
      break;
  }
  os << std::endl;

  os << "max speed: ";
  switch (request.max_speed) {
    case MaxSpeed::SLOW:
      os << "SLOW";
      break;
    case MaxSpeed::MEDIUM:
      os << "MEDIUM";
      break;
    case MaxSpeed::FULL_SPEED:
      os << "FULL_SPEED";
      break;
  }
  os << std::endl;

  os << "save parameter: " << +request.safe_parameter << std::endl;
  os << "calibrate imu: " << +request.calibrate_imu << std::endl;
  os << "emergency stop: " << +request.emergency_stop << std::endl;
  os << "hardware reset: " << +request.hardware_reset << std::endl;
  os << "controls (steering, throttle): (" << +request.controls.steering << ", " << +request.controls.throttle << ")" << std::endl;

  return os;
}