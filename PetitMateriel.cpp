#include <iostream>
#include <string>
#include "PetitMateriel.h"

PetitMateriel::PetitMateriel(std::string nom):Materiel(nom)
{
}
 std::ostream& operator<<(std::ostream& os , PetitMateriel& PetitMateriel){
    os << "Nom du petit materiel : "<< PetitMateriel.getNom()<< std:: endl;
    return os;
 }