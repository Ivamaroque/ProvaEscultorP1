#ifndef CUTBOX_H
  #define CUTBOX_H

  #include "figuraGeometrica.h"

  class CutBox:public FiguraGeometrica{
    int xi;
    int xf;
    int yi;
    int yf;
    int zi;
    int zf;
  public:
  
    CutBox(int xi_, int xf_, int yi_, int yf_, int zi_, int zf_);

    ~CutBox(){};

    void draw(Sculptor &sculptor);
  };

#endif // CUTBOX_H
