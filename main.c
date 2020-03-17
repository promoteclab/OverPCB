/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65
        Device            :  PIC16F18855
        Driver Version    :  2.00
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
 * 
 * RED LED -> PWM6
 * GREEN LED -> PWM1
 * BLUE LED ->PWM2
 * 
*/

#define RS RS_LAT
#define EN EN_LAT
#define D4 D4_LAT
#define D5 D5_LAT
#define D6 D6_LAT
#define D7 D7_LAT

#include "mcc_generated_files/mcc.h"
#include "lcd2.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

bool tt = false;
uint8_t hh=0;   //Hora actual
uint8_t mm=0;   //minuts actual
uint8_t ss=0;   //segons actuals
uint8_t dd=0;   //dia actual
uint8_t any=0;  //any actual dos ultimes xifres
uint16_t any1=0;//Any actual
uint8_t mes=0;  //Mes actual
uint8_t con =0;
uint8_t consc = 0;
volatile time_t getTime, setTime;
struct tm *tm_t;
uint16_t LDRR=0;
bool aa = true; //accés a pantalla

uint8_t temp(uint8_t sel);

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    Lcd_Init();
    Lcd_Clear();
    CS_SetHigh();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    

    while (1)
    {
        if(consc==3)
        {
            LDRR=(((ADCC_GetSingleConversion(LDR))-1023)*(-1));
            PWM1_LoadDutyValue(LDRR);
            PWM2_LoadDutyValue(LDRR);
            PWM6_LoadDutyValue(LDRR);   
        }
        while(0)
        {
            PWM1_LoadDutyValue(1023);  //Red
            PWM2_LoadDutyValue(1023);  //Blue
            PWM6_LoadDutyValue(0);  //Grean
            __delay_ms(500);
            PWM1_LoadDutyValue(1023);  //Red
            PWM2_LoadDutyValue(0);  //Blue
            PWM6_LoadDutyValue(1023);  //Grean
            __delay_ms(500);
            PWM1_LoadDutyValue(0);  //Red
            PWM2_LoadDutyValue(1023);  //Blue
            PWM6_LoadDutyValue(1023);  //Grean
            __delay_ms(500);
        }
        
        if(tt)
        {
            tt=false;
            rtc6_SetTime1(2018, 4, 20, 19, 32, 00); //any, mes, dia, hora, minut, segon
            __delay_ms(20);
        }
        if(!ADD_PORT)
        {
            while (!ADD_PORT) __delay_ms(10);
            aa=true;
            consc=1;
        }
        if(!LESS_PORT)
        {
            while (!LESS_PORT) __delay_ms(10);
            aa=true;
            consc=2;
        }
        if(!ACCESS_PORT)
        {
            while (!ACCESS_PORT) __delay_ms(10);
            aa=true;
            consc=3;
        }
        if(!SKIP_PORT)
        {
            while (!SKIP_PORT) __delay_ms(10);
            aa=true;
            consc=0;
        }

        
        if(TMR1IF)//500ms
        {
            
            TMR1IF=false;
            if(consc==3)
            {
                Lcd_Set_Cursor(1,14);
                Lcd_Num(temp(1));
            }
            if(consc==2)
            {
                getTime = rtc6_GetTime();
                tm_t = localtime(&getTime);
                hh=tm_t->tm_hour;
                mm=tm_t->tm_min;
                ss=tm_t->tm_sec;
                dd=tm_t->tm_mday;
                mes=tm_t->tm_mon;
                any1=tm_t->tm_year;
                any=any1-100;
                Lcd_Set_Cursor(2,1);
                Lcd_Num(dd);
                Lcd_Write_Char('/');
                Lcd_Num(mes);
                Lcd_Write_String("/20");
                Lcd_Num(any);
                Lcd_Write_Char(' ');
                Lcd_Num(hh);
                Lcd_Write_Char(':');
                Lcd_Num(mm); 
            }
            
        }
        if(aa)
        {
            aa=false;
            switch(consc)
            {
                case 0:
                    Lcd_Clear();
                    Lcd_Set_Cursor(1,2);
                    Lcd_Write_String("OVERDRIVE Con");
                    Lcd_Set_Cursor(2,1);
                    Lcd_Write_String("2018  DC170  UdG");
                    PWM1_LoadDutyValue(1023);  //Red
                    PWM2_LoadDutyValue(1023);  //Blue
                    PWM6_LoadDutyValue(1023);  //Green
                    SC_PORT=false;
                    break;
                case 1:
                    Lcd_Clear();
                    Lcd_Set_Cursor(1,2);
                    Lcd_Write_String("DefCon China");
                    Lcd_Set_Cursor(2,1);
                    Lcd_Write_String("DefCon Group 010");
                    PWM1_LoadDutyValue(510);  //Red
                    PWM2_LoadDutyValue(1023);  //Blue
                    PWM6_LoadDutyValue(1023);  //Green  
                    SC_PORT=true;
                    break;
                case 2:
                    Lcd_Clear();
                    Lcd_Set_Cursor(1,1);
                    Lcd_Write_String("Catalonia's Time");
                    PWM1_LoadDutyValue(1023);  //Red
                    PWM2_LoadDutyValue(400);  //Blue
                    PWM6_LoadDutyValue(1023);  //Green  
                    SC_PORT=true;
                    break;
                case 3:
                    Lcd_Clear();
                    Lcd_Set_Cursor(1,1);
                    Lcd_Write_String("Temperature:");
                    SC_PORT=true;
                    
            }
        }
    
    }
}

uint8_t temp(uint8_t sel)
{
    //variables per els termoparells
    uint8_t SPI = 0;
    uint8_t in1 = 0;
    uint8_t in2 = 0;
    uint8_t in3 = 0;
    uint8_t in4 = 0;
    uint16_t th = 0;    //temperatura calenta
    uint8_t dth = 0;    //coma de la temperatura calenta
    uint8_t tc = 0;     //Temepratura unió freda
    uint16_t dtc = 0;    //coma de la temperatura freda
    uint8_t temp = 0;   //dades temporals
    uint8_t out;
    uint8_t e=0;
    
    CS_SetLow();
    __delay_ms(1);           
    for(SPI=0; SPI<5; SPI++)
    {
        if(SPI==0) in1=SPI2_Exchange8bit(1);
        if(SPI==1) in2=SPI2_Exchange8bit(1);
        if(SPI==2) in3=SPI2_Exchange8bit(1);
        if(SPI==3) in4=SPI2_Exchange8bit(1);
        if(SPI==4)
        {
            CS_SetHigh();
            
            //processat de les dades
            //temperatura calenta
            if(in1 & 8)//comprovo si el valor es negatiu
            {
                temp=in2;
                temp=~temp;
                temp>>=4;
                th=~in1;
                th<<=4;
                th=(th|temp);
                //coma de la temperatura calenta
                temp=~in2;
                temp<<=4;
                temp>>=6;
                dth=temp*25;
            }
            else
            {
                temp=in2;
                temp>>=4;
                th=in1;
                th<<=4;
                th=(th|temp);
                //coma de la temperatura calenta
                temp=in2;
                temp<<=4;
                temp>>=6;
                dth=temp*25;
            }
            //temperatura freda
            tc=in3;
            //coma de la temp freda
            temp=in4;
            temp>>=4;
            dtc=temp*625;
            //control del termoparell
            if(in4 & 3) e=3;
            if(in4 & 2) e=2;
            if(in4 & 1) e=1;
        }
    }
    out=tc-30;
    return out;
}
/**
 End of File
*/