#ifndef POSTETRAVAIL_H
#define POSTETRAVAIL_H
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
friend std::ostream& operator<<(std::ostream& os , PosteTravail& poste);

};






#endif