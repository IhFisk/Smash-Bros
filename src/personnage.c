#include "personnage.h"

coordonnees perso_creerPerso()
{
    coordonnees c;
    c.x = 2;
    c.y = 15;
    MLV_draw_rectangle( c.x, c.y, 2, 2, MLV_COLOR_BLUE );

    return c;
}


coordonnees perso_deplacer(map m, coordonnees c, int direction)
{
    if(direction == 0 && m[c.x + 2][c.y] == 0)//gauche
	if(c.x >= 2 )
	    c.x -= 2;

    else
	if(direction == 1 && m[c.x + 2][c.y] == 0) //droite
	    if(c.x <= 25)
		c.x += 2;

    return c;
}



    
	

    
