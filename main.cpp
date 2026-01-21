#include "Salle.h"
#include "SalleInformatique.h"
#include "Materiel.h"
#include "MaterielReseau.h"
#include "MaterielSpecifique.h"
#include "PosteTravail.h"
#include "PetitMateriel.h"
#include "SalleCours.h"
#include "Connectique.h"
#include "Ecran.h"
#include "SalleTechnique.h"

#include <iostream>
#include <string>


int main(){
// ----------------------PRATIE TEST-------------------
    Materiel Ordinateur("HP");
    PetitMateriel p1("lenovo");
MaterielReseau mr("switch");
Salle salle("gr101");
SalleCours sal("amphi");
SalleInformatique si("gs26");
MaterielSpecifique ms("cable");
SalleTechnique st("ga036");
    std::cout << Ordinateur.getNom() << std::endl;
    Ecran LED("Nom" , 15.4);
    PosteTravail desk("dell","Ubuntu");
    std::cout << desk.getNom() << std::endl;
std::cout << salle << std::endl;
std::cout << si << std::endl;
std::cout << ms << std::endl;
std::cout << mr<< std::endl;
std::cout << Ordinateur << std::endl;
std::cout << LED << std::endl;
std::cout << sal << std::endl;

int choix;

std::cout << "-------GESTION DU MATERIEL--------" << std::endl;


std::cout << "Gestion du materiel";
std::cout << "1. Ajouter un materiel";
std::cout << "2. Afficher les materiels";
std::cout << "3. Rechecher un materiel";
std::cout << "0. retour au menu principal";
std::cout << "Choix : ";
std::cin >> choix ;
}