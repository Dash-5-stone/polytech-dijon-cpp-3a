#include <iostream>
#include <string>
#include "Materiel.h"
#include "PosteTravail.h"

PosteTravail::PosteTravail(std::string nom, std::string systeme):Materiel(nom),systeme_(systeme)
{
}

std::ostream& operator<<(std::ostream& os , PosteTravail& poste){
    os << "Nom du poste de travail : "<< poste.getNom() << std::endl;
    return os;
}