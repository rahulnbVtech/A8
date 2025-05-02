#ifndef MANUALBUILDER_H
#define MANUALBUILDER_H

#include <iostream>
#include <string>
#include "builder.h"
#include "manual.h"

//------------ManualBuilder---------------------
class ManualBuilder : public Builder{
    private:
      Manual *manual;
    public:
      //Fresh builder should contain blank car
      ManualBuilder(){this->reset();}
      ~ManualBuilder(){delete manual;}
      void reset() override {this->manual = new Manual();}
  
      //Production steps with same car instance
      void setEngine(std::string &engine) override;
      void setSeats(std::string &seats) override;
      void setTripComputer(std::string &tripComputer) override;
      void setGPS(std::string &gps) override;
      void setColor(const std::string& color);
      virtual void setSunroof(bool hasSunroof) = 0;
  
      // smart pointers may be better
      Manual* GetProduct();
  };

  #endif