#include "Salle.h"
#include "Salle.h"
#include "SalleInformatique.h"
#include "Materiel.h"
#include "MaterielReseau.h"
#include "MaterielSpecifique.h"
#include "PosteTravail.h"
#include "PetitMateriel.h"
#include "Connectique.h"


int main(){
    Materiel Ordinateur("HP");
    std::cout << Ordinateur.getNom();
}