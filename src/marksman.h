#ifndef MARKSMAN_H
#define MARKSMAN_H

#include "personnage.h"

// Attaque de base
int marksman_attaqueA(perso *p,map m,persoTab joueurs,int nbJoueurs,int pa);

// Condamnation
int marksman_atkE(perso *p,map m,persoTab joueurs,int nbJoueurs,int pa);

#endif
