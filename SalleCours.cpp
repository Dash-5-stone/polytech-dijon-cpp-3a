#include "Salle.h"
#include <string>
#include <iostream>
#include "SalleCours.h"

SalleCours::SalleCours(std::string nom):Salle(nom)
{
}

std::ostream& operator<<(std::ostream& os , SalleCours& SalleCours){
    os << "Nom de la salle de cours : "<< SalleCours.getNom() << std::endl;
    return os;
}