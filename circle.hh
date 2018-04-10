#pragma once

#include "PostScript"



class Circle: public PostScript {
  private:
    int rad;
  public:
    Circle(int x, int y, int r) : x(x), y(y), rad(r){  }
    // add methods under
    //file read
    //assign variables
   }
  void drawCircle(){
    std::cout << "bs" << x << y << r << '\n';
  }
};
