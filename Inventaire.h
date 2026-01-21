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
Inventaire() =default;
    Inventaire(std::vector<Materiel> materiel, std::vector<Salle> salle );
    std::vector<Materiel> getMateriels() const;
    std::vector<Salle> getSalle() const;
    void setMateeriel();
    void setSalle();
    void ajouterMateriel(Materiel materiel);
    void ajouterSalle(Salle salle);
    void afficherMateriel(Materiel& materiel);
    void rechercherMateriel(std::string nom);
    void rechercherSalle(std::string nom);
friend std::ostream& operator<<(std::ostream& os , Inventaire& inventaire);
};








#endif