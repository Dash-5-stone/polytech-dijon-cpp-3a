#ifndef SALLE_H
#define SALLE_H
#include <iostream>
#include <string>

class Salle
{
protected:
    std::string nom_;
public:
    Salle(std::string nom);
    std::string getNom();
    void setNom(std::string nom);
 
};








#endif