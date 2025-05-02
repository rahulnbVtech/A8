#ifndef DIRECTOR_H
#define DIRECTOR_H

#include <iostream>
#include <string>
#include "builder.h"

//---------------------Directory-------------------

// Director works with any builder that client passes
class Director{
    public:
      void makeSUV(Builder *builder);
      void makeSportsCar(Builder *builder);
      void makeLuxuryCar(Builder *builder);
  };

  #endif
  