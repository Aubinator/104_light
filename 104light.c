#include "prototype.h"
#include<math.h>
int 	main(int ac, char **av)
{
	if (ac == 9)
	{
	  if (debuter(av) != 1)
		{		printf("argument  non valide\n");
			exit(-1);
		}
		if (atoi(av[1]) == 1)
			option1(atoi(av[2]),atoi(av[3]),atoi(av[4]),atoi(av[5]),atoi(av[6]),atoi(av[7]),atoi(av[8]));

		if (atoi(av[1]) == 2)
			option2(atoi(av[2]),atoi(av[3]),atoi(av[4]),atoi(av[5]),atoi(av[6]),atoi(av[7]),atoi(av[8]));
		if (atoi(av[1]) == 3)
			option3(atoi(av[2]),atoi(av[3]),atoi(av[4]),atoi(av[5]),atoi(av[6]),atoi(av[7]),atoi(av[8]));
	}
	else
	{
		printf("Arguments invalides \n");
	}
	return(0);

}
