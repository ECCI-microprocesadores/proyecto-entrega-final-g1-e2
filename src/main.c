#include "config.h"
#include "servo.h"

void main(void) {
    // Configura RA0 como entrada digital
    ANSELA = 0xE0;             // RA0-RA3 digitales (0), RA4 digital (0), RA5 analógico (1)
    TRISAbits.TRISA0 = 1;      // RA0 como entrada
    
    servo_init();
    while (1) {
        if (PORTAbits.RA0 == 0) {
            // Objeto detectado (RA0 == 0), mover servo a 90 grados
            servo_setAngle(90);
            __delay_ms(3000);
        } else {
            // No detecta, mantener servo en 0 grados
            servo_setAngle(0);
        }
    }
}
