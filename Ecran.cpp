#include <iostream>
#include <string>
#include "Materiel.h"
#include "Ecran.h"

Ecran::Ecran(std::string nom,double taille):Materiel(nom),taille_(taille)
{
}

 void afficherTaille(Ecran& ecran){
    std::cout << "Taille : "<< ecran.getNom() << std::endl;
 }
std::ostream& operator<<(std::ostream& os , Ecran& ecran){
    os << "Nom de l'ecran : " <<ecran.nom_ << " Taille de l'ecran : " << ecran.taille_ << std::endl;
return os;
}
