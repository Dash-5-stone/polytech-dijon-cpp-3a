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
    std::string getNom() const;
    void setNom(std::string nom);
 friend std::ostream& operator<<(std::ostream& os , Salle& salle);

};








#endif