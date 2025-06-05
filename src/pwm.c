#include "config.h"
#include "pwm.h"

void PWM_Init(void) {
    // Configura Timer2 con prescaler 16 para ~500 Hz (2 ms periodo)
    T2CONbits.T2CKPS = 0b10; // Prescaler = 16
    PR2 = 249;               // PR2 = 249 ? periodo = (249+1)*4*(1/8MHz)*16 = 2 ms
    // Configura CCP1 en modo PWM
    CCP1CONbits.CCP1M = 0b1100;
    // Configura RC2 como salida digital (PWM1)
    TRISCbits.TRISC2 = 0;
    // Inicializa con duty cycle en 0%
    CCPR1L = 0;
    CCP1CONbits.DC1B = 0;
    // Enciende Timer2 para activar PWM
    T2CONbits.TMR2ON = 1;
}

void PWM_SetDuty(uint16_t duty) {
    // Limita valor a 10 bits (0-1023)
    if (duty > 1023) duty = 1023;
    // Asigna 8 MSB a CCPR1L y 2 LSB a CCP1CON<5:4>
    CCPR1L = (duty >> 2);
    CCP1CONbits.DC1B = (uint8_t)(duty & 0x03);
}
