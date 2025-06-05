#ifndef SERVO_H
#define SERVO_H

#include <stdint.h>

// Control de servo usando PWM (ángulo en grados 0-180)
void servo_init(void);
void servo_setAngle(uint8_t angle);

#endif  // SERVO_H
