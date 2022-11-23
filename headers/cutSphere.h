#ifndef CUT_SPHERE_H
  #define CUT_SPHERE_H

  #include "figuraGeometrica.h"

  class CutSphere:public FiguraGeometrica{
    int x_center;
    int y_center;
    int z_center;
    int radius;
  public:

    CutSphere(int x_center_, int y_center_, int z_center_, int radius_);


    ~CutSphere(){};

    void draw(Sculptor &sculptor);
  };

#endif // CUT_SPHERE_H
