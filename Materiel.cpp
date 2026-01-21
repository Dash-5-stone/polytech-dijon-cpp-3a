#include "Materiel.h"
#include <iostream>
#include <string>

Materiel::Materiel(std::string nom):nom_(nom)
{
}

std::string Materiel::getNom() const{
    return nom_;
}

void Materiel::setNom(std::string nom){
    nom_=nom;
}
std::ostream& operator<<(std::ostream& os , Materiel& materiel){
    os << "Nom du Materiel : " << materiel.nom_<< std::endl;
    return os;
}
