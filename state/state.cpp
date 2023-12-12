//
// Created by Lars Schwarz on 11.12.2023.
//

#include "state.h"

std::ostream &State::operator<<(std::ostream &os, const State &state) {
  os << "operating mode: ";
  switch (state.robocar) {
    case Robocar::INITIALISING:
      os << "INITIALISING";
      break;
    case Robocar::RUNNING:
      os << "RUNNING";
      break;
    case Robocar::EMS:
      os << "EMERGENCY STOP";
      break;
  }
  os << std::endl;

  os << "IMU: ";
  switch (state.imu) {
    case Imu::DISCONNECTED:
      os << "DISCONNECTED";
      break;
    case Imu::UNCALIBRATED:
      os << "UNCALIBRATED";
      break;
    case Imu::CALIBRATING:
      os << "CALIBRATING";
      break;
    case Imu::CALIBRATED:
      os << "CALIBRATED";
      break;
    case Imu::FAULT:
      os << "FAULT";
      break;
  }
  os << std::endl;

  return os;
}

