/*
  Security System with Password
  Microcontroller: PIC16F877A
  Components: Keypad, LCD 16x2, LED
  Language: MikroC
*/

char keypadPort at PORTB;

sbit LCD_RS at RD2_bit;
sbit LCD_EN at RD3_bit;
sbit LCD_D4 at RD4_bit;
sbit LCD_D5 at RD5_bit;
sbit LCD_D6 at RD6_bit;
sbit LCD_D7 at RD7_bit;

sbit LCD_RS_Direction at TRISD2_bit;
sbit LCD_EN_Direction at TRISD3_bit;
sbit LCD_D4_Direction at TRISD4_bit;
sbit LCD_D5_Direction at TRISD5_bit;
sbit LCD_D6_Direction at TRISD6_bit;
sbit LCD_D7_Direction at TRISD7_bit;

int i;
char password[4];

char get_password() {
  line1:
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Out(1, 1, "Enter Password:");
  
  // Password input logic here
  // (Complete based on your keypad implementation)
  
  return 0;
}

void main() {
  TRISC.B0 = 0;
  PORTC.B0 = 0;
  
  Lcd_Init();
  Keypad_Init();
  Lcd_Cmd(_LCD_CURSOR_OFF);
  
  get_password();
  
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Out(1, 1, "Welcome");
  
  while(1) {
    PORTC.B0 = 1;  // LED ON
    Delay_ms(1000);
    PORTC.B0 = 0;  // LED OFF
    Delay_ms(1000);
  }
}
