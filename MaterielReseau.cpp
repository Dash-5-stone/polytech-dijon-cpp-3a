#include <iostream>
#include <string>
#include "Materiel.h"
#include "MaterielReseau.h"


MaterielReseau::MaterielReseau(std::string nom):Materiel(nom)
{
}
std::ostream& operator<<(std::ostream& os , MaterielReseau& materiel){
    os << "Nom du materiel reseau : "<< materiel.getNom() << std::endl;
    return os;
}