#ifndef CARBUILDER_H
#define CARBUILDER_H

#include <iostream>
#include <string>

#include "car.h"
#include "builder.h"

//ConcreteBuilder: specific implementation of building steps
//We may have several variation of Builders,  implemented differently

//------------CarBuilder---------------------
class CarBuilder : public Builder{
    private:
      Car *car;
    public:
      //Fresh builder should contain blank car
      CarBuilder(){this->reset();}
      ~CarBuilder(){delete car;}
      void reset() override {this->car = new Car();}
  
      //Production steps with same car instance
      void setEngine(std::string &engine) override;
      void setSeats(std::string &seats) override;
      void setTripComputer(std::string &tripComputer) override;
      void setGPS(std::string &gps) override;
      virtual void setSunroof(bool hasSunroof) override;
      void setColor(const std::string& color);
  
      Car* GetProduct();
  };

  #endif