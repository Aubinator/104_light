#include "prototype.h"
#include<math.h>
void	option1(int xa, int ya,int za, int xb,int yb, int zb, int rayon)
{
	float delta, k1, k2;
	delta = sqrt(8*(xa*xb)*(ya*yb)-4*(pow((xb*ya), 2)+pow((yb*xa), 2)) + 4*(xb*xb+ yb*yb)*rayon*rayon);
	if (delta < 0)
	{
		printf("Cylindre de Rayon %d \nDroite passant par le Point(%d, %d, %d) et de Vecteur directeur (%d, %d; %d)", rayon, xa, ya, za, xb, yb, zb);
		printf("\nNombre de Points D'intersection 0");
	}
	else if (delta == 0)
	{

		k1 = (-2*(xa*xb + ya*yb) - delta)/(2*(xb*xb + yb*yb));
		printf("Cylindre de Rayon %d \nDroite passant par le Point(%d, %d, %d) et de Vecteur directeur (%d, %d; %d) \nNombre de Points d'intersection 1",rayon, xa, ya, ya, xb, yb, zb);
		printf("Point A: (%f), (%f), (%f) \n",(k1*xb+ xa), (k1*yb+ya), (k1*zb+za));
	}
	else
	{
		printf("Cylindre de Rayon %d \nDroite passant par le Point(%d, %d, %d) et de Vecteur directeur (%d, %d; %d) \nNombre de Points d'intersection 2\n",rayon, xa, ya, ya, xb, yb, zb);
		k1 = (-2*(xa*xb + ya*yb) - delta)/(2*(xb*xb + yb*yb));
		k2 = (-2*(xa*xb + ya*yb) + delta)/(2*(xb*xb + yb*yb));
		printf("Point A: (%f), (%f), (%f) \n",(k1*xb+ xa), (k1*yb+ya), (k1*zb+za));
		printf("Point B: (%f), (%f), (%f) \n",(k2*xb+ xa), (k2*yb+ya), (k2*zb+za));
	}

}

