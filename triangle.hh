#pragma once

#include "PostScript"


class Triangle: public PostScript{
  private:
    int x2, y2, x3, y3;
  public:
    Triangle(int x, int y, int x2, int y2, int x3, int y3) :  x(x), y(y),  x2(x2), y2(y2), x3(x3), y3(y3){}
    // add methods
};
