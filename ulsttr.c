
#include<unistd.h>

void ulstr(char *str)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			write(1, &str[i], 1);
		}

		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			write(1, &str[i], 1);
		}

		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, &str[i], 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ulstr(argv[1]);
	}
}