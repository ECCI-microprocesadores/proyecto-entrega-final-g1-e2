#ifndef CONFIG_H
#define CONFIG_H

#include <xc.h>
#include <stdint.h>

#define _XTAL_FREQ 8000000

// Configuración de bits de configuración
#pragma config FOSC = INTIO67   // Oscillator Selection bits (Internal oscillator block)
#pragma config PLLCFG = OFF     // PLL Enable (Oscillator used directly)
#pragma config PRICLKEN = ON    // Primary clock enabled
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor disabled
#pragma config IESO = OFF       // Oscillator Switchover mode disabled

#pragma config PWRTEN = OFF     // Power-up Timer disabled
#pragma config BOREN = OFF      // Brown-out Reset disabled
#pragma config BORV = 285       // Brown-out Reset Voltage (2.85V)
#pragma config WDTEN = OFF      // Watchdog Timer disabled
#pragma config LVP = OFF        // Low-Voltage Programming disabled
#pragma config DEBUG = OFF      // Background Debugger disabled

#pragma config MCLRE = EXTMCLR  // MCLR pin enabled, RE3 input pin disabled

#endif  // CONFIG_H
