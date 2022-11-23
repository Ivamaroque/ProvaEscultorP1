#include <iostream>
#include <fstream>

#include "voxel.h"

#ifndef SCULPTOR
#define SCULPTOR


  class Sculptor {
    protected:
      Voxel ***v;
      
      int nx;
      int ny;
      int nz;
      
      float r;
      float g;
      float b;
      float a;
    public:

      Sculptor(int _nx, int _ny, int _nz);


      ~Sculptor();

      void setColor(float r, float g, float b, float alpha);

      void putVoxel(int x, int y, int z);

      void cutVoxel(int x, int y, int z);

      void writeOFF(const char* filename);
  };

#endif // SCULPTOR
