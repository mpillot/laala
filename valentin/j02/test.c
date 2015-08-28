#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char* s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

int main(int argc, char**argv)
{
	if(argc == 3)
	{
		ft_putstr(argv[1]);
		ft_putchar('\n');
		ft_putstr(argv[2]);
	}
	else
	{
		ft_putstr("Rentrez votre nom et prenom");
	}
	return (0);
}

