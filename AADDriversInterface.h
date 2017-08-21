// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef _AADDriversInterface_H_
#define _AADDriversInterface_H_
#include "Arduino.h"
//add your includes for the project AADDriversInterface here

class AADLCDDriversInterface{
    public:
	  virtual unsigned int getMaxHeight(void);
	  virtual unsigned int getMaxWidth(void);
      virtual void clear(void);
      virtual void set_bgcolor(int color);
      virtual void goto_xy(byte x, byte y);
      virtual void pixel(byte x, byte y, int color);
      virtual void print_char(byte x, byte y, unsigned char c, unsigned int color);
      virtual void print_string(byte x, byte y, char *str, unsigned int color);
      virtual void line(byte x0, byte y0, byte x1, byte y1, unsigned int color);
      virtual void circle(byte x0, byte y0, byte r, unsigned int color);
      virtual void v_line(byte x, byte y, byte h, unsigned int color);
      virtual void h_line(byte x, byte y, byte w, unsigned int color);
      virtual void rectangle(byte x, byte y, byte w, byte h, unsigned int color);
      virtual void fill(byte x, byte y, byte w, byte h, unsigned int color);
      virtual void bitmap(byte x, byte y, const byte *bitmap, byte w, byte h, unsigned int color);

      virtual ~AADLCDDriversInterface(){}
  };




//Do not add code below this line
#endif /* _AADDriversInterface_H_ */
