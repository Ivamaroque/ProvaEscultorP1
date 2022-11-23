#ifndef CUT_ELLIPSOID_H
  #define CUT_ELLIPSOID_H

  #include "figuraGeometrica.h"

  class CutEllipsoid:public FiguraGeometrica{
    int x_center;
    int y_center;
    int z_center;
    int x_radius;
    int y_radius;
    int z_radius;
  public:

    CutEllipsoid(int x_center_, int y_center_, int z_center_, int x_radius_, int y_radius_, int z_radius_);
    ~CutEllipsoid(){};
    void draw(Sculptor &sculptor);
  };

#endif // CUT_ELLIPSOID_H
