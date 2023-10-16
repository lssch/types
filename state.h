//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_STATE_H
#define TYPES_STATE_H

typedef enum _state_mpu_e {
  MPU6050_STATE_DISCONNECTED = 0,
  MPU6050_STATE_UNCALIBRATED,
  MPU6050_STATE_CALIBRATING,
  MPU6050_STATE_CALIBRATED,
  MPU6050_STATE_FAULT,
} __attribute__((packed)) state_mpu_e;

typedef struct _state_t {
  state_mpu_e mpu;
  struct {
    uint8_t load;
    uint8_t clock;
  } __attribute__((packed)) cpu;
} __attribute__((packed)) state_t;

#endif //TYPES_STATE_H
