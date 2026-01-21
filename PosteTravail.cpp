#include <iostream>
#include <string>
#include "Materiel.h"
#include "PosteTravail.h"

PosteTravail::PosteTravail(std::string nom, std::string systeme):Materiel(nom),systeme_(systeme)
{
}