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

  os << "TOF-SPOT: ";
  switch (state.tof_spot) {
    case TofSpot::VALID_DATA:
      os << "VALID_DATA";
      break;
    case TofSpot::VCSEL_SHORT:
      os << "VCSEL_SHORT";
      break;
    case TofSpot::LOW_SIGNAL:
      os << "LOW_SIGNAL";
      break;
    case TofSpot::LOW_SN:
      os << "LOW_SN";
      break;
    case TofSpot::TOO_MUCH_AMB:
      os << "TOO_MUCH_AMB";
      break;
    case TofSpot::WAF:
      os << "WAF";
      break;
    case TofSpot::CAL_ERROR:
      os << "CAL_ERROR";
      break;
    case TofSpot::CROSSTALK_ERROR:
      os << "CROSSTALK_ERROR";
      break;
  }
  os << std::endl;

  return os;
}

