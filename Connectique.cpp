#include <iostream>
#include <string>
#include "Connectique.h"


Connectique::Connectique(std::string nom):Materiel(nom)
{
}
std::ostream& operator<<(std::ostream& os , Connectique& connectique){
    os << "Nom du connectique : " << connectique.getNom() << std::endl;
    return os;
    
}
