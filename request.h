//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_REQUEST_H
#define TYPES_REQUEST_H

namespace Request {
  class Request {
  public:
    bool safe_parameter;
    bool calibrate_imu;
    struct {
      int16_t throttle;
      int16_t steering;
    } controls;
  };
}

#endif //TYPES_REQUEST_H
