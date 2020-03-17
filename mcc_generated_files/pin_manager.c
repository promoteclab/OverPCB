/**
  Generated Pin Manager File

  Company:
    Microchip Technology Inc.

  File Name:
    pin_manager.c

  Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.35
        Device            :  PIC16F18855
        Driver Version    :  1.02
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

#include <xc.h>
#include "pin_manager.h"
#include "stdbool.h"



void PIN_MANAGER_Initialize(void)
{
    /**
    LATx registers
    */   
    LATA = 0x00;    
    LATB = 0x00;    
    LATC = 0x40;    

    /**
    TRISx registers
    */    
    TRISA = 0xFE;
    TRISB = 0xF0;
    TRISC = 0x40;

    /**
    ANSELx registers
    */   
    ANSELC = 0x00;
    ANSELB = 0xC0;
    ANSELA = 0x40;

    /**
    WPUx registers
    */ 
    WPUE = 0x00;
    WPUB = 0x00;
    WPUA = 0x00;
    WPUC = 0x00;

    /**
    ODx registers
    */   
    ODCONA = 0x00;
    ODCONB = 0x00;
    ODCONC = 0x00;
    


   
    
    
    SSP1DATPPSbits.SSP1DATPPS = 0x0C;   //RB4->MSSP1:SDA1;
    SSP1CLKPPSbits.SSP1CLKPPS = 0x0D;   //RB5->MSSP1:SCL1;
    RB2PPS = 0x09;   //RB2->CCP1:CCP1;
    RB5PPS = 0x14;   //RB5->MSSP1:SCL1;
    RB3PPS = 0x0A;   //RB3->CCP2:CCP2;
    RB4PPS = 0x15;   //RB4->MSSP1:SDA1;
    RA0PPS = 0x0E;   //RA0->PWM6:PWM6OUT;
    RC7PPS = 0x16;   //RC7->MSSP2:SCK2;
    SSP2DATPPSbits.SSP2DATPPS = 0x16;   //RC6->MSSP2:SDI2;
    SSP2CLKPPSbits.SSP2CLKPPS = 0x17;   //RC7->MSSP2:SCK2;

}       

void PIN_MANAGER_IOC(void)
{   

}

/**
 End of File
*/