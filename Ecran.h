#ifndef SALLE_H
#define SALLE_H
#include <iostream>
#include <string>
#include "Materiel.h"

class Ecran : public Materiel
{
private:
    
public:
    Ecran(std::string nom);
    void afficherTaille();
    
};






#endif