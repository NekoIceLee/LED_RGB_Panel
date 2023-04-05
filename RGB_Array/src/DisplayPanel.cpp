#include "DisplayPanel.hpp"



DisplayPanel::DisplayPanel(int rowsCount, int columnsCount, int pinNum)
{
    pixels = new Adafruit_NeoPixel(rowsCount * columnsCount, pinNum, NEO_GRB|NEO_KHZ800);

}

DisplayPanel::~DisplayPanel()
{
}
