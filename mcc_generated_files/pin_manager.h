/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.35
        Device            :  PIC16F18855
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 procedures
#define RA0_SetHigh()    do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()   do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()   do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()         PORTAbits.RA0
#define RA0_SetDigitalInput()   do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()  do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()     do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()   do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode() do { ANSELAbits.ANSA0 = 1; } while(0)
#define RA0_SetDigitalMode()do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set ADD aliases
#define ADD_TRIS               TRISAbits.TRISA1
#define ADD_LAT                LATAbits.LATA1
#define ADD_PORT               PORTAbits.RA1
#define ADD_WPU                WPUAbits.WPUA1
#define ADD_OD                ODCONAbits.ODCA1
#define ADD_ANS                ANSELAbits.ANSA1
#define ADD_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define ADD_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define ADD_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define ADD_GetValue()           PORTAbits.RA1
#define ADD_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define ADD_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define ADD_SetPullup()      do { WPUAbits.WPUA1 = 1; } while(0)
#define ADD_ResetPullup()    do { WPUAbits.WPUA1 = 0; } while(0)
#define ADD_SetPushPull()    do { ODCONAbits.ODCA1 = 0; } while(0)
#define ADD_SetOpenDrain()   do { ODCONAbits.ODCA1 = 1; } while(0)
#define ADD_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define ADD_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LESS aliases
#define LESS_TRIS               TRISAbits.TRISA2
#define LESS_LAT                LATAbits.LATA2
#define LESS_PORT               PORTAbits.RA2
#define LESS_WPU                WPUAbits.WPUA2
#define LESS_OD                ODCONAbits.ODCA2
#define LESS_ANS                ANSELAbits.ANSA2
#define LESS_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LESS_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LESS_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LESS_GetValue()           PORTAbits.RA2
#define LESS_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LESS_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LESS_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define LESS_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define LESS_SetPushPull()    do { ODCONAbits.ODCA2 = 0; } while(0)
#define LESS_SetOpenDrain()   do { ODCONAbits.ODCA2 = 1; } while(0)
#define LESS_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define LESS_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set ACCESS aliases
#define ACCESS_TRIS               TRISAbits.TRISA3
#define ACCESS_LAT                LATAbits.LATA3
#define ACCESS_PORT               PORTAbits.RA3
#define ACCESS_WPU                WPUAbits.WPUA3
#define ACCESS_OD                ODCONAbits.ODCA3
#define ACCESS_ANS                ANSELAbits.ANSA3
#define ACCESS_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define ACCESS_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define ACCESS_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define ACCESS_GetValue()           PORTAbits.RA3
#define ACCESS_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define ACCESS_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define ACCESS_SetPullup()      do { WPUAbits.WPUA3 = 1; } while(0)
#define ACCESS_ResetPullup()    do { WPUAbits.WPUA3 = 0; } while(0)
#define ACCESS_SetPushPull()    do { ODCONAbits.ODCA3 = 0; } while(0)
#define ACCESS_SetOpenDrain()   do { ODCONAbits.ODCA3 = 1; } while(0)
#define ACCESS_SetAnalogMode()  do { ANSELAbits.ANSA3 = 1; } while(0)
#define ACCESS_SetDigitalMode() do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set SKIP aliases
#define SKIP_TRIS               TRISAbits.TRISA4
#define SKIP_LAT                LATAbits.LATA4
#define SKIP_PORT               PORTAbits.RA4
#define SKIP_WPU                WPUAbits.WPUA4
#define SKIP_OD                ODCONAbits.ODCA4
#define SKIP_ANS                ANSELAbits.ANSA4
#define SKIP_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define SKIP_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define SKIP_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define SKIP_GetValue()           PORTAbits.RA4
#define SKIP_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define SKIP_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define SKIP_SetPullup()      do { WPUAbits.WPUA4 = 1; } while(0)
#define SKIP_ResetPullup()    do { WPUAbits.WPUA4 = 0; } while(0)
#define SKIP_SetPushPull()    do { ODCONAbits.ODCA4 = 0; } while(0)
#define SKIP_SetOpenDrain()   do { ODCONAbits.ODCA4 = 1; } while(0)
#define SKIP_SetAnalogMode()  do { ANSELAbits.ANSA4 = 1; } while(0)
#define SKIP_SetDigitalMode() do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set RTC6_INT aliases
#define RTC6_INT_TRIS               TRISAbits.TRISA5
#define RTC6_INT_LAT                LATAbits.LATA5
#define RTC6_INT_PORT               PORTAbits.RA5
#define RTC6_INT_WPU                WPUAbits.WPUA5
#define RTC6_INT_OD                ODCONAbits.ODCA5
#define RTC6_INT_ANS                ANSELAbits.ANSA5
#define RTC6_INT_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define RTC6_INT_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define RTC6_INT_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RTC6_INT_GetValue()           PORTAbits.RA5
#define RTC6_INT_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define RTC6_INT_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define RTC6_INT_SetPullup()      do { WPUAbits.WPUA5 = 1; } while(0)
#define RTC6_INT_ResetPullup()    do { WPUAbits.WPUA5 = 0; } while(0)
#define RTC6_INT_SetPushPull()    do { ODCONAbits.ODCA5 = 0; } while(0)
#define RTC6_INT_SetOpenDrain()   do { ODCONAbits.ODCA5 = 1; } while(0)
#define RTC6_INT_SetAnalogMode()  do { ANSELAbits.ANSA5 = 1; } while(0)
#define RTC6_INT_SetDigitalMode() do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set LDR aliases
#define LDR_TRIS               TRISAbits.TRISA6
#define LDR_LAT                LATAbits.LATA6
#define LDR_PORT               PORTAbits.RA6
#define LDR_WPU                WPUAbits.WPUA6
#define LDR_OD                ODCONAbits.ODCA6
#define LDR_ANS                ANSELAbits.ANSA6
#define LDR_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define LDR_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define LDR_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define LDR_GetValue()           PORTAbits.RA6
#define LDR_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define LDR_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define LDR_SetPullup()      do { WPUAbits.WPUA6 = 1; } while(0)
#define LDR_ResetPullup()    do { WPUAbits.WPUA6 = 0; } while(0)
#define LDR_SetPushPull()    do { ODCONAbits.ODCA6 = 0; } while(0)
#define LDR_SetOpenDrain()   do { ODCONAbits.ODCA6 = 1; } while(0)
#define LDR_SetAnalogMode()  do { ANSELAbits.ANSA6 = 1; } while(0)
#define LDR_SetDigitalMode() do { ANSELAbits.ANSA6 = 0; } while(0)

// get/set IRIN aliases
#define IRIN_TRIS               TRISAbits.TRISA7
#define IRIN_LAT                LATAbits.LATA7
#define IRIN_PORT               PORTAbits.RA7
#define IRIN_WPU                WPUAbits.WPUA7
#define IRIN_OD                ODCONAbits.ODCA7
#define IRIN_ANS                ANSELAbits.ANSA7
#define IRIN_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define IRIN_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define IRIN_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define IRIN_GetValue()           PORTAbits.RA7
#define IRIN_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define IRIN_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define IRIN_SetPullup()      do { WPUAbits.WPUA7 = 1; } while(0)
#define IRIN_ResetPullup()    do { WPUAbits.WPUA7 = 0; } while(0)
#define IRIN_SetPushPull()    do { ODCONAbits.ODCA7 = 0; } while(0)
#define IRIN_SetOpenDrain()   do { ODCONAbits.ODCA7 = 1; } while(0)
#define IRIN_SetAnalogMode()  do { ANSELAbits.ANSA7 = 1; } while(0)
#define IRIN_SetDigitalMode() do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set SC aliases
#define SC_TRIS               TRISBbits.TRISB0
#define SC_LAT                LATBbits.LATB0
#define SC_PORT               PORTBbits.RB0
#define SC_WPU                WPUBbits.WPUB0
#define SC_OD                ODCONBbits.ODCB0
#define SC_ANS                ANSELBbits.ANSB0
#define SC_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define SC_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define SC_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define SC_GetValue()           PORTBbits.RB0
#define SC_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define SC_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define SC_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define SC_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)
#define SC_SetPushPull()    do { ODCONBbits.ODCB0 = 0; } while(0)
#define SC_SetOpenDrain()   do { ODCONBbits.ODCB0 = 1; } while(0)
#define SC_SetAnalogMode()  do { ANSELBbits.ANSB0 = 1; } while(0)
#define SC_SetDigitalMode() do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set CS aliases
#define CS_TRIS               TRISBbits.TRISB1
#define CS_LAT                LATBbits.LATB1
#define CS_PORT               PORTBbits.RB1
#define CS_WPU                WPUBbits.WPUB1
#define CS_OD                ODCONBbits.ODCB1
#define CS_ANS                ANSELBbits.ANSB1
#define CS_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define CS_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define CS_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define CS_GetValue()           PORTBbits.RB1
#define CS_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define CS_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define CS_SetPullup()      do { WPUBbits.WPUB1 = 1; } while(0)
#define CS_ResetPullup()    do { WPUBbits.WPUB1 = 0; } while(0)
#define CS_SetPushPull()    do { ODCONBbits.ODCB1 = 0; } while(0)
#define CS_SetOpenDrain()   do { ODCONBbits.ODCB1 = 1; } while(0)
#define CS_SetAnalogMode()  do { ANSELBbits.ANSB1 = 1; } while(0)
#define CS_SetDigitalMode() do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()    do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()   do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()   do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()         PORTBbits.RB2
#define RB2_SetDigitalInput()   do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()  do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()     do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()   do { WPUBbits.WPUB2 = 0; } while(0)
#define RB2_SetAnalogMode() do { ANSELBbits.ANSB2 = 1; } while(0)
#define RB2_SetDigitalMode()do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()    do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()   do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()   do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()         PORTBbits.RB3
#define RB3_SetDigitalInput()   do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()  do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()     do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()   do { WPUBbits.WPUB3 = 0; } while(0)
#define RB3_SetAnalogMode() do { ANSELBbits.ANSB3 = 1; } while(0)
#define RB3_SetDigitalMode()do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set SDA1 aliases
#define SDA1_TRIS               TRISBbits.TRISB4
#define SDA1_LAT                LATBbits.LATB4
#define SDA1_PORT               PORTBbits.RB4
#define SDA1_WPU                WPUBbits.WPUB4
#define SDA1_OD                ODCONBbits.ODCB4
#define SDA1_ANS                ANSELBbits.ANSB4
#define SDA1_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SDA1_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SDA1_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SDA1_GetValue()           PORTBbits.RB4
#define SDA1_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SDA1_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SDA1_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define SDA1_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define SDA1_SetPushPull()    do { ODCONBbits.ODCB4 = 0; } while(0)
#define SDA1_SetOpenDrain()   do { ODCONBbits.ODCB4 = 1; } while(0)
#define SDA1_SetAnalogMode()  do { ANSELBbits.ANSB4 = 1; } while(0)
#define SDA1_SetDigitalMode() do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set SCL1 aliases
#define SCL1_TRIS               TRISBbits.TRISB5
#define SCL1_LAT                LATBbits.LATB5
#define SCL1_PORT               PORTBbits.RB5
#define SCL1_WPU                WPUBbits.WPUB5
#define SCL1_OD                ODCONBbits.ODCB5
#define SCL1_ANS                ANSELBbits.ANSB5
#define SCL1_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define SCL1_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define SCL1_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define SCL1_GetValue()           PORTBbits.RB5
#define SCL1_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define SCL1_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define SCL1_SetPullup()      do { WPUBbits.WPUB5 = 1; } while(0)
#define SCL1_ResetPullup()    do { WPUBbits.WPUB5 = 0; } while(0)
#define SCL1_SetPushPull()    do { ODCONBbits.ODCB5 = 0; } while(0)
#define SCL1_SetOpenDrain()   do { ODCONBbits.ODCB5 = 1; } while(0)
#define SCL1_SetAnalogMode()  do { ANSELBbits.ANSB5 = 1; } while(0)
#define SCL1_SetDigitalMode() do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set D4 aliases
#define D4_TRIS               TRISCbits.TRISC0
#define D4_LAT                LATCbits.LATC0
#define D4_PORT               PORTCbits.RC0
#define D4_WPU                WPUCbits.WPUC0
#define D4_OD                ODCONCbits.ODCC0
#define D4_ANS                ANSELCbits.ANSC0
#define D4_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define D4_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define D4_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define D4_GetValue()           PORTCbits.RC0
#define D4_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define D4_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define D4_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define D4_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define D4_SetPushPull()    do { ODCONCbits.ODCC0 = 0; } while(0)
#define D4_SetOpenDrain()   do { ODCONCbits.ODCC0 = 1; } while(0)
#define D4_SetAnalogMode()  do { ANSELCbits.ANSC0 = 1; } while(0)
#define D4_SetDigitalMode() do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set D5 aliases
#define D5_TRIS               TRISCbits.TRISC1
#define D5_LAT                LATCbits.LATC1
#define D5_PORT               PORTCbits.RC1
#define D5_WPU                WPUCbits.WPUC1
#define D5_OD                ODCONCbits.ODCC1
#define D5_ANS                ANSELCbits.ANSC1
#define D5_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define D5_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define D5_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define D5_GetValue()           PORTCbits.RC1
#define D5_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define D5_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define D5_SetPullup()      do { WPUCbits.WPUC1 = 1; } while(0)
#define D5_ResetPullup()    do { WPUCbits.WPUC1 = 0; } while(0)
#define D5_SetPushPull()    do { ODCONCbits.ODCC1 = 0; } while(0)
#define D5_SetOpenDrain()   do { ODCONCbits.ODCC1 = 1; } while(0)
#define D5_SetAnalogMode()  do { ANSELCbits.ANSC1 = 1; } while(0)
#define D5_SetDigitalMode() do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set D6 aliases
#define D6_TRIS               TRISCbits.TRISC2
#define D6_LAT                LATCbits.LATC2
#define D6_PORT               PORTCbits.RC2
#define D6_WPU                WPUCbits.WPUC2
#define D6_OD                ODCONCbits.ODCC2
#define D6_ANS                ANSELCbits.ANSC2
#define D6_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define D6_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define D6_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define D6_GetValue()           PORTCbits.RC2
#define D6_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define D6_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define D6_SetPullup()      do { WPUCbits.WPUC2 = 1; } while(0)
#define D6_ResetPullup()    do { WPUCbits.WPUC2 = 0; } while(0)
#define D6_SetPushPull()    do { ODCONCbits.ODCC2 = 0; } while(0)
#define D6_SetOpenDrain()   do { ODCONCbits.ODCC2 = 1; } while(0)
#define D6_SetAnalogMode()  do { ANSELCbits.ANSC2 = 1; } while(0)
#define D6_SetDigitalMode() do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set D7 aliases
#define D7_TRIS               TRISCbits.TRISC3
#define D7_LAT                LATCbits.LATC3
#define D7_PORT               PORTCbits.RC3
#define D7_WPU                WPUCbits.WPUC3
#define D7_OD                ODCONCbits.ODCC3
#define D7_ANS                ANSELCbits.ANSC3
#define D7_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define D7_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define D7_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define D7_GetValue()           PORTCbits.RC3
#define D7_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define D7_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define D7_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define D7_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define D7_SetPushPull()    do { ODCONCbits.ODCC3 = 0; } while(0)
#define D7_SetOpenDrain()   do { ODCONCbits.ODCC3 = 1; } while(0)
#define D7_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define D7_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set EN aliases
#define EN_TRIS               TRISCbits.TRISC4
#define EN_LAT                LATCbits.LATC4
#define EN_PORT               PORTCbits.RC4
#define EN_WPU                WPUCbits.WPUC4
#define EN_OD                ODCONCbits.ODCC4
#define EN_ANS                ANSELCbits.ANSC4
#define EN_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define EN_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define EN_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define EN_GetValue()           PORTCbits.RC4
#define EN_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define EN_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define EN_SetPullup()      do { WPUCbits.WPUC4 = 1; } while(0)
#define EN_ResetPullup()    do { WPUCbits.WPUC4 = 0; } while(0)
#define EN_SetPushPull()    do { ODCONCbits.ODCC4 = 0; } while(0)
#define EN_SetOpenDrain()   do { ODCONCbits.ODCC4 = 1; } while(0)
#define EN_SetAnalogMode()  do { ANSELCbits.ANSC4 = 1; } while(0)
#define EN_SetDigitalMode() do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RS aliases
#define RS_TRIS               TRISCbits.TRISC5
#define RS_LAT                LATCbits.LATC5
#define RS_PORT               PORTCbits.RC5
#define RS_WPU                WPUCbits.WPUC5
#define RS_OD                ODCONCbits.ODCC5
#define RS_ANS                ANSELCbits.ANSC5
#define RS_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RS_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RS_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RS_GetValue()           PORTCbits.RC5
#define RS_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RS_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RS_SetPullup()      do { WPUCbits.WPUC5 = 1; } while(0)
#define RS_ResetPullup()    do { WPUCbits.WPUC5 = 0; } while(0)
#define RS_SetPushPull()    do { ODCONCbits.ODCC5 = 0; } while(0)
#define RS_SetOpenDrain()   do { ODCONCbits.ODCC5 = 1; } while(0)
#define RS_SetAnalogMode()  do { ANSELCbits.ANSC5 = 1; } while(0)
#define RS_SetDigitalMode() do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set SDI2 aliases
#define SDI2_TRIS               TRISCbits.TRISC6
#define SDI2_LAT                LATCbits.LATC6
#define SDI2_PORT               PORTCbits.RC6
#define SDI2_WPU                WPUCbits.WPUC6
#define SDI2_OD                ODCONCbits.ODCC6
#define SDI2_ANS                ANSELCbits.ANSC6
#define SDI2_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define SDI2_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define SDI2_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define SDI2_GetValue()           PORTCbits.RC6
#define SDI2_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define SDI2_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define SDI2_SetPullup()      do { WPUCbits.WPUC6 = 1; } while(0)
#define SDI2_ResetPullup()    do { WPUCbits.WPUC6 = 0; } while(0)
#define SDI2_SetPushPull()    do { ODCONCbits.ODCC6 = 0; } while(0)
#define SDI2_SetOpenDrain()   do { ODCONCbits.ODCC6 = 1; } while(0)
#define SDI2_SetAnalogMode()  do { ANSELCbits.ANSC6 = 1; } while(0)
#define SDI2_SetDigitalMode() do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set SCK2 aliases
#define SCK2_TRIS               TRISCbits.TRISC7
#define SCK2_LAT                LATCbits.LATC7
#define SCK2_PORT               PORTCbits.RC7
#define SCK2_WPU                WPUCbits.WPUC7
#define SCK2_OD                ODCONCbits.ODCC7
#define SCK2_ANS                ANSELCbits.ANSC7
#define SCK2_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define SCK2_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define SCK2_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define SCK2_GetValue()           PORTCbits.RC7
#define SCK2_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define SCK2_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define SCK2_SetPullup()      do { WPUCbits.WPUC7 = 1; } while(0)
#define SCK2_ResetPullup()    do { WPUCbits.WPUC7 = 0; } while(0)
#define SCK2_SetPushPull()    do { ODCONCbits.ODCC7 = 0; } while(0)
#define SCK2_SetOpenDrain()   do { ODCONCbits.ODCC7 = 1; } while(0)
#define SCK2_SetAnalogMode()  do { ANSELCbits.ANSC7 = 1; } while(0)
#define SCK2_SetDigitalMode() do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/