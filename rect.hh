#pragma once

#include "PostScript"


class Rect: public PostScript {
  private:
    int width, height;
  public:
    Rect(int x, int y, int w, int h) : x(x), y(y), width(w), height(h){  }
    // add methods under
    //file read
    //assign variables
  }
  void drawRect(){
    std::cout << "postscript words" << x << y << w << h << "stroke" << '\n';
  }
  void fillRect(){
    cout << "postscript words" << x << y << w << h << "fill" <<  '\n';
  }
};
