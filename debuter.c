#include <string.h>
int	debuter(char **av)
{
	if (av[1][0] < '1' || av[1][0] > '3')
		return (-1);
	int i = 1, flag = 1;
	while (i < 8)
	{
		if (entier(av[i]) == 1)
			flag++;
		i++;
	}
	if (flag == i)
		return (1);
	else 
		return (-1);
}

int 	entier(char *av)
{
	int i = 0, flag = 0;
	while (av[i] != '\0')
	{
		if (av[i] >= '0' && av[i] <= '9')
			flag++;
		if ((av[i] == '-' || av[i] == '+') && (av[i+1] >= '0' && av[i+1] <= '9'))
			flag++;
		i++;
	}

	if (flag == strlen(av))
		return (1);
	else return (-1);
}
