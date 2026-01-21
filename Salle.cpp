#include "Salle.h"
#include <iostream>
#include <string>


Salle::Salle(std::string nom):nom_(nom)
{
}

std::string Salle::getNom() const{
return nom_;
}
std::ostream& operator<<(std::ostream& os ,Salle& salle){
os << "Nom de la salle : " << salle.getNom() << std::endl ;
return os;
}
