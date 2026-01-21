#include "Salle.h"
#include <iostream>
#include <string>
#include "SalleInformatique.h"


SalleInformatique::SalleInformatique(std::string nom):Salle(nom)
{
}
std::ostream& operator<<(std::ostream& os , SalleInformatique& salleinfo){
os << "Nom de la salle Informatique : " << salleinfo.getNom() << std::endl;
return os;
}