#include <string.h>
#include <unistd.h>

int ft_strcmp(const char *s1, const char *s2)
{
	int i = 0;
	while(s1[i] && s2[i])
	{
		if(s1[i] != s2[i])
			return(s1[i] - s2[i]);
		i++;
	}
	return(s1[i] - s2[i]);

}

int main()
{
	const char *s1 = "hola que tal";
	const char *s2 = "hola que eee";
	
	if (ft_strcmp(s1, s2) == strcmp(s1, s2))
		write(1, "iguales", 7);


}
