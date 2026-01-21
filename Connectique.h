#ifndef CONNECTIQUE_H
#define CONNECTIQUE_H
#include <iostream>
#include <string>
#include "Materiel.h"

class Connectique : public Materiel{
private:
  
public:
    Connectique(std::string nom);
  friend std::ostream& operator<<(std::ostream& os , Connectique& connectique);

};






#endif