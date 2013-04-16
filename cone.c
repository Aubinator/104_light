#include "prototype.h"
#include <math.h>
void	option3(int xa, int ya,int za, int xb,int yb, int zb, int angles)
{
	float delta, k1, k2, a, b, c;
	double PI = 3.141592654;
	float angle = (angles*PI)/180;
	a = pow(xb,2) + pow(yb,2) -(pow(tan(angle),2)* (pow(zb,2)));
	b = 2*((xa*xb)+(ya*yb) - (pow(tan(angle),2)*(za*zb)));
	c = (pow(xa,2) + pow(ya,2) - (pow(tan(angle),2)*(pow(za,2))));
	delta = pow(b,2) - 4*a*c;
	if (delta < 0)
	{
		printf("CONE d'angle %f \nDroite passant par le Point(%d, %d, %d) et de Vecteur directeur (%d, %d; %d)", angle, xa, ya, za, xb, yb, zb);
		printf("\nNombre de Points D'intersection 0");
	}
	else if (delta == 0)
	{

		k1 = ((-b) -sqrt(delta))/2*a;
		printf("CONE d'angle %f \nDroite passant par le Point(%d, %d, %d) et de Vecteur directeur (%d, %d; %d) \nNombre de Points d'intersection 1",angle, xa, ya, ya, xb, yb, zb);
		printf("Point A  (%f), (%f), (%f) \n",(k1*xb+ xa), (k1*yb+ya), (k1*zb+za));
	}
	else
	{
		printf("CONE d'angle %d \nDroite passant par le Point(%d, %d, %d) et de Vecteur directeur (%d, %d; %d) \nNombre de Points d'intersection 2\n",angles, xa, ya, za, xb, yb, zb);
		k1 = ((-b) -sqrt(delta))/(2*a);
		k2 =((-b) + sqrt(delta))/(2*a);

		printf("Point A  (%f), (%f), (%f) \n",(k1*xb+ xa), (k1*yb+ya), (k1*zb+za));
		printf("Point B  (%f), (%f), (%f) \n",(k2*xb+ xa), (k2*yb+ya), (k2*zb+za));
	}

}

