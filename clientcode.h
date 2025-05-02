#ifndef CLIENTCODE_H
#define CLIENTCODE_H

#include <iostream>
#include <string>
#include "carbuilder.h"
#include "manualbuilder.h"
#include "director.h"
/*
Client Code: creates builder object
Passes to director and initiates
construction process
End result is retrieved from the builder object.
*/

// smart pointers can be used
void ClientCode1(Director &director);
  
  
  // smart pointers can be used
void ClientCode2(Director &director);
  
  
  // smart pointers can be used
void ClientCode3(Director &director);

std::pair<Car*, Manual*> ClientCode4(Director &director);

#endif