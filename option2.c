#include "prototype.h"
void	option2(int xa, int ya,int za, int xb,int yb, int zb, int rayon)
{
	float delta, k1, k2;
	delta = 8*((xa*xb)*((ya*yb)+(za*zb))+(ya*yb)*(za*zb)) -4*(pow((xb*ya),2)+pow((xb*za),2) + pow((yb*xa),2) + pow((yb*za),2) + pow((zb*xa),2) + pow((zb*ya),2)) +(4*(pow(rayon,2)))*(pow((xb),2) + pow((yb),2) + pow(zb, 2));
	if (delta < 0)
	{
		printf("SPHERE de Rayon  = %d \nDroite passant par le Point(%d, %d, %d) et de Vecteur directeur (%d, %d; %d)", rayon, xa, ya, za, xb, yb, zb);
		printf("\nNombre de Points D'intersection 0\n");
	}
	else if (delta == 0)
	{

		
	        k1 = (-2*(xa*xb + ya*yb + za*zb) - delta)/(2*(xb*xb + yb*yb + zb*zb));
		printf("SPHERE de Rayon =  %d \nDroite passant par le Point(%d, %d, %d) et de Vecteur directeur (%d, %d; %d) \nNombre de Points d'intersection 1\n",rayon, xa, ya, ya, xb, yb, zb);
		printf("Point A: (%f), (%f), (%f) \n",(k1*xb+ xa), (k1*yb+ya), (k1*zb+za));
	}
	else
	{
		printf("SPHERE de Rayon = %d \nDroite passant par le Point(%d, %d, %d) et de Vecteur directeur (%d, %d; %d) \nNombre de Points d'intersection 2\n",rayon, xa, ya, ya, xb, yb, zb);
		k1 = (-2*(xa*xb + ya*yb + za*zb) - delta)/(2*(xb*xb + yb*yb + zb*zb));
		k2 = (-2*(xa*xb + ya*yb + za*zb) + delta)/(2*(xb*xb + yb*yb + zb*zb));
		printf("%f k1, %f k2 \n", k1, k2);
		printf("Point A: (%f), (%f), (%f) \n",(k1*xb+ xa), (k1*yb+ya), (k1*zb+za));
		printf("Point B: (%f), (%f), (%f) \n",(k2*xb+ xa), (k2*yb+ya), (k2*zb+za));
	}

}

