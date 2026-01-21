#ifndef MATERILSPECIFIQUE_H
#define MATERIELSPECIFIQUE_H
#include <iostream>
#include <string>
#include "Materiel.h"

class MaterielSpecifique : public Materiel
{
private:
  
public:
    MaterielSpecifique(std::string nom);
    friend std::ostream& operator<<(std::ostream& os , MaterielSpecifique& MaterielSpecifique);
};






#endif