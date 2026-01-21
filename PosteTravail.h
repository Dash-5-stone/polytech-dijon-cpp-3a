#ifndef SALLE_H
#define SALLE_H
#include "Materiel.h"
#include <iostream>
#include <string>

class PosteTravail :public Materiel
{
private:
std::string systeme_;
  
public:
    PosteTravail(std::string nom, std::string systeme);
    void enregistrerSysteme(std::string systeme);

};






#endif