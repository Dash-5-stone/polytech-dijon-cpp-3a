#pragma once
#ifndef MATEREIL_H
#define MATERIEL_H
#include <iostream>
#include <string>


class Materiel{
protected:
    std::string nom_; 
public:
    Materiel(std::string nom);
    std::string getNom() const;
    void setNom(std::string nom);
   void reserverMateriel();
   friend std::ostream& operator<<(std::ostream& os , Materiel& materiel);
};








#endif