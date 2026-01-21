#ifndef SALLEINFORMATIQUE_H
#define SALLEINFORMATIQUE_H

#include "Salle.h"

class SalleInformatique :public Salle
{
private:

public:
    SalleInformatique(std::string nom);
  friend std::ostream& operator<<(std::ostream& os , SalleInformatique& salleInfo );
  
};






#endif