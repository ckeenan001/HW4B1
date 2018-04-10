#pragma once
#include "PostScript.hh"

class Color{
  private:
    int red, green, blue;
  public:
    Color(int r, int g, int b) : red(r), green(g), blue(b){    }
    setColor(){
      cout<<"PostScript code"<<r<<g<<b;
    }
    setFillColor(){
      cout<<"PostScript code"<<r<<g<<b;
    }
    setStrokeColor(){
      cout<<"PostScript code"<<r<<g<<b;
    }



};
