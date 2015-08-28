void    ft_putchar(char c);

void    ft_1(char c, int x)
{
	int blarge;

	blarge = 0;
	ft_putchar(c);
	while (blarge < x - 2)
	{
		ft_putchar('-');
		blarge++;
	}
	if (x > 1)
		ft_putchar(c);
	ft_putchar('\n');
}


void    ft_2(int x, int y)
{
	int blarge;
	int bhight;

	blarge = 0;
	bhight = 0;
	while (blarge < y - 2)
	{
		ft_putchar('|');
		while (bhight < x - 2)
		{
			ft_putchar(' ');
			bhight++;
		}
		if (x > 1)
			ft_putchar('|');
		ft_putchar('\n');
		blarge++;
		bhight = 0;
	}
}

void    colle0(int x, int y)
{
	char a;
	char c;

	a = 'o';
	c = 'o';
	if (x > 0 && y > 0)
	{
		ft_1(a, x);
		ft_2(x, y);
		if (y > 1)
		{
			ft_1(c, x);
		}
	}
}
