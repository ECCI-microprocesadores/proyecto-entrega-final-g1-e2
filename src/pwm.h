#ifndef PWM_H
#define PWM_H

#include <xc.h>
#include <stdint.h>

// Inicializa y controla el PWM (CCP1) en RC2
void PWM_Init(void);
void PWM_SetDuty(uint16_t duty);

#endif  // PWM_H
