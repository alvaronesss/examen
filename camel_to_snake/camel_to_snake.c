
#include<unistd.h>

void camel(char *str)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			write(1,"_", 1);
						

			str[i] = str[i] + 32;
			write(1, &str[i], 1);
				
		}
		
		else
			write(1, &str[i], 1);
	i++;
		
	}
	write(1, "\n", 1);
			
			
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		camel(argv[1]);
	}

	else
		write(1, "\n", 1);
}
