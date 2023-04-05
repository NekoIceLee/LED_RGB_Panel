
#ifndef __DISPLAYPANEL_HPP__
#define __DISPLAYPANEL_HPP__

#include <Adafruit_NeoPixel.h>

class DisplayPanel
{
private:
    Adafruit_NeoPixel *pixels;

public:
    DisplayPanel(int rowsCount, int columnsCount, int pinNum);
    ~DisplayPanel();
};

#endif /* __DISPLAYPANEL_HPP__ */