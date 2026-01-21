#include "Salle.h"
#include "SalleInformatique.h"
#include "Materiel.h"
#include "MaterielReseau.h"
#include "MaterielSpecifique.h"
#include "PosteTravail.h"
#include "PetitMateriel.h"
#include "SalleCours.h"
#include "Connectique.h"
#include "Inventaire.h"
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
Inventaire invent();

int choix;

do{

std::cout << "-------GESTION DU MATERIEL--------" << std::endl;


std::cout << "Gestion du materiel \n";
std::cout << "1. Ajouter un materiel \n";
std::cout << "2. Afficher les materiels \n";
std::cout << "3. Rechecher un materiel \n";
std::cout << "0. retour au menu principal \n";
std::cout << "Choix : ";
std::cin >> choix ;



    switch (choix)
   {
   case 1: {
    std::string nom;
    std::cout << " Entrer le nom :" << std::endl;
    std::cin >> nom;
    Materiel mat(nom); 
    std::cout << mat;
    Inventaire invent1();
    

   };
   
    break;
    case 2:

    break;
   
   default:
    break;
   }
}while (choix!=0);

return 0;
 
}



