#include "Salle.h"
#include <string>
#include <iostream>
#include "SalleTechnique.h"

SalleTechnique::SalleTechnique(std::string nom):Salle(nom)
{
}
std::ostream& operator<<(std::ostream& os , SalleTechnique& salletech){
    os << "Nom de la salle Technique: "<< salletech.getNom() << std::endl;
    return os;
}