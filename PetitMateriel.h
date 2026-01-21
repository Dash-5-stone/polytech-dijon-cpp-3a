#ifndef PETITMATERIEL_H
#define PETITMATERIEL_H
#include <iostream>
#include <string>
#include "Materiel.h"

class PetitMateriel :public Materiel
{
private:
  
public:
    PetitMateriel(std::string nom);
     friend std::ostream& operator<<(std::ostream& os , PetitMateriel& PetitMateriel);
};







#endif