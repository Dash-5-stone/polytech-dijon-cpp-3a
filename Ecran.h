#ifndef ECRAN_H
#define ECRAN_H
#include <iostream>
#include <string>
#include "Materiel.h"

class Ecran : public Materiel
{
private:
    double taille_;
    
public:
    Ecran(std::string nom, double taille);
    friend std::ostream& operator<<(std::ostream& os , Ecran& ecran);
    void afficherTaille(Ecran& ecran);

};






#endif