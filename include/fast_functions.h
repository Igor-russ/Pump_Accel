#ifndef FAST_FUNCTIONS_H
#define FAST_FUNCTIONS_H
#include <Arduino.h>
extern const int LCD_ADDR;
//******** LCD fast functions******
void lcd_send(uint8_t, uint8_t);
inline void lcd_command(uint8_t);
inline void lcd_printChar(char);
void lcd_setCursor(uint8_t, uint8_t);
void lcd_print(char *);
//**** Working with pins fast functions
void pinMod(uint8_t, uint8_t);
void pinWrite(uint8_t, bool);
bool pinRead(uint8_t);
void pinToggle(uint8_t);
#endif