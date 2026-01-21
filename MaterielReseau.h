#ifndef MATERIELRESEAU_H
#define MATERIELRESEAU_H
#include <iostream>
#include <string>
#include "Materiel.h"

class MaterielReseau : public Materiel
{
private:
  
public:
    MaterielReseau(std::string nom);
    friend std::ostream& operator<<(std::ostream& os , MaterielReseau& materiel);
};







#endif