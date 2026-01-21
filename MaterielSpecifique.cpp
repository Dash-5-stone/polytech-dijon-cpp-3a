#include <iostream>
#include <string>
#include "Materiel.h"
#include "MaterielSpecifique.h"

MaterielSpecifique::MaterielSpecifique(std::string nom):Materiel(nom)
{
}
std::ostream& operator<<(std::ostream& os , MaterielSpecifique& MaterielSpecifique){
    os << "Nom du materiel specifique : " << MaterielSpecifique.getNom() << std::endl;
    return os;
    
}