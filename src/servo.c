#include "config.h"
#include "servo.h"
#include "pwm.h"

void servo_init(void) {
    PWM_Init();
    // Posición inicial en 0 grados
    servo_setAngle(0);
}

void servo_setAngle(uint8_t angle) {
    // Convierte ángulo (0-180) a pulso en µs (1000-2000 µs)
    if (angle > 180) angle = 180;
    uint16_t pulse = 1000 + ((uint16_t)angle * 1000) / 180;
    // Convierte pulso a valor de duty para PWM (Fosc=8MHz, prescale=16)
    // (125 = 8MHz/(4*16*1000))
    uint16_t duty = (pulse * 125UL) / 1000;
    PWM_SetDuty(duty);
}
