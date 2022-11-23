#ifndef INTERPRETER_H
  #define INTERPRETER_H

  #include <vector>
  #include <string>
  #include "./figuraGeometrica.h"

  class Interpreter{
    private:
      int dimX;
      int dimY;
      int dimZ;
      float r;
      float g;
      float b;
      float a;
    public:

      Interpreter();

      int getDimX();

      int getDimY();

      int getDimZ();

      std::vector<FiguraGeometrica *> parse(std::string file_path);
  };

#endif // INTERPRETER_H
