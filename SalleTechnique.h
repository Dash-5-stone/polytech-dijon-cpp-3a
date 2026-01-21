#ifndef SALLETECHNIQUE_H
#define SALLETECHNIQUE_H
#include "Salle.h"
#include <string>
#include <iostream>


class SalleTechnique :public Salle
{
private:
   
public:
    SalleTechnique(std::string nom);
    friend std::ostream& operator<<(std::ostream& os , SalleTechnique& salletech);
};







#endif