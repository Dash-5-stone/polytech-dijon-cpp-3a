#include <iostream>
#include <string>
#include "Inventaire.h"
#include "Materiel.h"
#include "Salle.h"
#include <vector>

Inventaire::Inventaire(std::vector<Materiel> materiel, std::vector<Salle> salle):materiels_(materiel),salles_(salle)
{
}
 std::vector<Materiel> Inventaire::getMateriels(){
return materiels_;
 }