/***************************************************************************//**
 * @file    LCD.h
 * @author  Mohammad Sharique
 * @date    11/Mai/20109
 *
 * @brief   Function declaration of the LCD functions
 ******************************************************************************/

#ifndef LIBS_LCD_H_
#define LIBS_LCD_H_

/******************************************************************************
 * INCLUDES
 *****************************************************************************/

#include <msp430g2553.h>

/******************************************************************************
 * CONSTANTS
 *****************************************************************************/
#define DR P3OUT = P3OUT | BIT0 // define RS high
#define CWR P3OUT = P3OUT & (~BIT0) // define RS low

#define RS_HIGH P3OUT = P3OUT | BIT0 // define RS high
#define RS_LOW P3OUT = P3OUT & (~BIT0) // define RS low

#define READ P3OUT = P3OUT | BIT1
// define Read signal R/W = 1 for reading
#define WRITE P3OUT = P3OUT & (~BIT1)
// define Write signal R/W = 0 for writing
#define ENABLE_HIGH P3OUT = P3OUT | BIT2
// define Enable high signal
#define ENABLE_LOW P3OUT = P3OUT & (~BIT2)
// define Enable Low signal

/******************************************************************************
 * VARIABLES
 *****************************************************************************/

unsigned int OFCount;

/******************************************************************************
 * FUNCTION PROTOTYPES
 *****************************************************************************/

/** Initialization */

// Initialization of the LCD; set all pin directions,
// basic setup of the LCD, etc. (1 pt.)
void lcd_init (void);


/** Control functions */

// Enable (1) or disable (0) the display (i.e. hide all text) (0.5 pts.)
void lcd_enable (unsigned char on);

// Set the cursor to a certain x/y-position (0.5 pts.)
void lcd_cursorSet (unsigned char x, unsigned char y);

// Show (1) or hide (0) the cursor (0.5 pts.)
void lcd_cursorShow (unsigned char on);

// Blink (1) or don't blink (0) the cursor (0.5 pts.)
void lcd_cursorBlink (unsigned char on);


/** Data manipulation */

// Delete everything on the LCD (1 pt.)
void lcd_clear (void);

// Put a single character on the display at the cursor's current position (1 pt.)
void lcd_putChar (char character);

// Show a given string on the display. If the text is too long to display,
// don't show the rest (i.e. don't break into the next line) (1 pt.).
void lcd_putText (char * text);

// Show a given number at the cursor's current position.
// Note that this is a signed variable! (1 pt.)
void lcd_putNumber (int number);

// for providing time delay
//void delay(unsigned int k);

void initTimer_A(void);
void delayMS(unsigned int msecs);

// for printing from Left to Right
void lcd_displayLeftToRight();

// for printing from Right to Left
void lcd_displayRightToLeft();

// for scrolling the displayed data
void lcd_scrollDisplayLeft();
void lcd_scrollDisplayRight();

// for custom character
void custom_character();

#endif /* LIBS_LCD_H_ */
