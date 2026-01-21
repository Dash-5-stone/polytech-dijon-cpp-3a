#include <iostream>
#include <string>
#include "Inventaire.h"
#include "Materiel.h"
#include "Salle.h"
#include <vector>

Inventaire::Inventaire(std::vector<Materiel> materiel, std::vector<Salle> salle):materiels_(materiel),salles_(salle)
{
}
 std::vector<Materiel> Inventaire::getMateriels() const{
return materiels_;
 }
  std::vector<Salle> Inventaire::getSalle() const{
return salles_;

 }
 void Inventaire::ajouterSalle(Salle salle){
salles_.push_back(salle);
 }
  void Inventaire::ajouterMateriel(Materiel materiel){
materiels_.push_back(materiel);
 }
 void Inventaire::afficherMateriel(Materiel& materiel){
    for(size_t i=0; i<materiels_.size();i++){
        std::cout << materiels_[i];
    }
}