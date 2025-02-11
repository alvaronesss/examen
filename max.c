#include <stdio.h>
#include <unistd.h>

int	max(int *tab, unsigned int len)
{
	int i = 0;
	int max = tab[i];
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}

	return(max);
}
int main()
{
	int tab[] = {1 ,2 ,2};
	unsigned int len = 3;
	printf("%i", max(tab, len));
	return (0);
}