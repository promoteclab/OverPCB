//LCD Functions Developed by Madeco_Pronic


void Lcd_Port(char a)
{
	if(a & 1)
		D4 = 1;
	else
		D4 = 0;

	if(a & 2)
		D5 = 1;
	else
		D5 = 0;

	if(a & 4)
		D6 = 1;
	else
		D6 = 0;

	if(a & 8)
		D7 = 1;
	else
		D7 = 0;
}
void Lcd_Cmd(char a)
{
	RS = 0;             // => RS = 0
	Lcd_Port(a);
	EN  = 1;             // => E = 1
        __delay_ms(4);
        EN  = 0;             // => E = 0
}

Lcd_Clear()
{
	Lcd_Cmd(0);
	Lcd_Cmd(1);
}

void Lcd_Set_Cursor(char a, char b)
{
	char temp,z,y;
	if(a == 1)
	{
	  temp = 0x80 + b - 1;
		z = temp>>4;
		y = temp & 0x0F;
		Lcd_Cmd(z);
		Lcd_Cmd(y);
	}
	else if(a == 2)
	{
		temp = 0xC0 + b - 1;
		z = temp>>4;
		y = temp & 0x0F;
		Lcd_Cmd(z);
		Lcd_Cmd(y);
	}
}

void Lcd_Init()
{
  Lcd_Port(0x00);
   __delay_ms(20);
  Lcd_Cmd(0x03);
	__delay_ms(5);
  Lcd_Cmd(0x03);
	__delay_ms(11);
  Lcd_Cmd(0x03);
  /////////////////////////////////////////////////////
  Lcd_Cmd(0x02);
  Lcd_Cmd(0x02);
  Lcd_Cmd(0x08);
  Lcd_Cmd(0x00);
  Lcd_Cmd(0x0C);
  Lcd_Cmd(0x00);
  Lcd_Cmd(0x06);
}

void Lcd_Write_Char(char a)
{
   char temp,y;
   temp = a&0x0F;
   y = a&0xF0;
   RS = 1;             // => RS = 1
   Lcd_Port(y>>4);             //Data transfer
   EN = 1;
   __delay_us(40);
   EN = 0;
   Lcd_Port(temp);
   EN = 1;
   __delay_us(40);
   EN = 0;
}

void Lcd_Write_String(char *a)
{
	int i;
	for(i=0;a[i]!='\0';i++)
	   Lcd_Write_Char(a[i]);
}

void Lcd_Shift_Right()
{
	Lcd_Cmd(0x01);
	Lcd_Cmd(0x0C);
}

void Lcd_Shift_Left()
{
	Lcd_Cmd(0x01);
	Lcd_Cmd(0x08);
}

void Lcd_Num(uint8_t d)
{
    switch (d)
        {
            case 0:
                Lcd_Write_String("00");
                break;
            case 1:
                Lcd_Write_String("01");
                break;
            case 2:
                Lcd_Write_String("02");
                break;
            case 3:
                Lcd_Write_String("03");
                break;
            case 4:
                Lcd_Write_String("04");
                break;
            case 5:
                Lcd_Write_String("05");
                break;
            case 6:
                Lcd_Write_String("06");
                break;
            case 7:
                Lcd_Write_String("07");
               break;
            case 8:
                Lcd_Write_String("08");
                break;
            case 9:
                Lcd_Write_String("09");
                break;
            case 10:
                Lcd_Write_String("10");
               break;
            case 11:
                Lcd_Write_String("11");
                break;
            case 12:
                Lcd_Write_String("12");
                break;
            case 13:
                Lcd_Write_String("13");
                break;
            case 14:
                Lcd_Write_String("14");
                break;
            case 15:
                Lcd_Write_String("15");
                break;
            case 16:
                Lcd_Write_String("16");
                break;
            case 17:
                Lcd_Write_String("17");
                break;
            case 18:
                Lcd_Write_String("18");
                break;
            case 19:
                Lcd_Write_String("19");
                break;
            case 20:
                Lcd_Write_String("20");
                break;
            case 21:
                Lcd_Write_String("21");
                break;
            case 22:
                Lcd_Write_String("22");
                break;
            case 23:
                Lcd_Write_String("23");
                break;
            case 24:
                Lcd_Write_String("24");
                break;
            case 25:
                Lcd_Write_String("25");
                break;
            case 26:
                Lcd_Write_String("26");
                break;
            case 27:
                Lcd_Write_String("27");
                break;
            case 28:
                Lcd_Write_String("28");
                break;
            case 29:
                Lcd_Write_String("29");
                break;
            case 30:
                Lcd_Write_String("30");
                break;
            case 31:
                Lcd_Write_String("31");
                break;
            case 32:
                Lcd_Write_String("32");
                break;
            case 33:
                Lcd_Write_String("33");
                break;
            case 34:
                Lcd_Write_String("34");
                break;
            case 35:
                Lcd_Write_String("35");
                break;
            case 36:
                Lcd_Write_String("36");
                break;
            case 37:
                Lcd_Write_String("37");
                break;
            case 38:
                Lcd_Write_String("38");
                break;
            case 39:
                Lcd_Write_String("39");
                break;
            case 40:
                Lcd_Write_String("40");
                break;
            case 41:
                Lcd_Write_String("41");
                break;
            case 42:     
                Lcd_Write_String("42");
                break;
            case 43:
                Lcd_Write_String("43");
                break;
            case 44:
                 Lcd_Write_String("44");
                break;
            case 45:
                Lcd_Write_String("45");
                break;
            case 46:
                Lcd_Write_String("46");
                break;
            case 47:
                Lcd_Write_String("47");
                break;
            case 48:
                Lcd_Write_String("48");
                break;
            case 49:
                Lcd_Write_String("49");
                break;
            case 50:
                Lcd_Write_String("50");
                break;
            case 51:
                Lcd_Write_String("51");
                break;
            case 52:     
                Lcd_Write_String("52");
                break;
            case 53:
                Lcd_Write_String("53");
                break;
            case 54:
                 Lcd_Write_String("54");
                break;
            case 55:
                Lcd_Write_String("55");
                break;
            case 56:
                Lcd_Write_String("56");
                break;
            case 57:
                Lcd_Write_String("57");
                break;
            case 58:
                Lcd_Write_String("58");
                break;
            case 59:
                Lcd_Write_String("59");
                break;
            case 60:
                Lcd_Write_String("60");
                break;
            case 61:
                Lcd_Write_String("61");
                break;
            default:
                Lcd_Set_Cursor(1,1);
                Lcd_Write_String("ERROR EE33");
                    
            }
}

