#ifndef SALLECOURS_H
#define SALLECOURS_H
#include "Salle.h"
#include <iostream>
#include <string>
class SalleCours : public Salle
{
private:
   
public:
    SalleCours(std::string nom);
    friend std::ostream& operator<<(std::ostream& os , SalleCours& salleCours);
};





#endif