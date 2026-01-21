#ifndef INVENTAIRE_H
#define INVENTAIRE_H
#include <iostream>
#include <string>
#include <vector>
#include "Materiel.h"
#include "Salle.h"


class Inventaire{
private:
    std::vector<Materiel> materiels_;
    std::vector<Salle> salles_;
public:
    Inventaire(std::vector<Materiel> materiel, std::vector<Salle> salle );
    std::vector<Materiel> getMateriels();
    std::vector<Salle> getSalle();
    void setMateeriel();
    void setSalle();
    void ajouterMateriel(std::string nom);
    void ajouterSalle(std::string nom);
    void rechercherMateriel(std::string nom);
    void rechercherSalle(std::string nom);
 
};








#endif