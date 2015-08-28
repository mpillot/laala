/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_initial_valid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerniss <rmerniss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/16 17:13:13 by rmerniss          #+#    #+#             */
/*   Updated: 2015/08/16 22:50:31 by mpillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h> 

/* on va determiner les conditions de validite de la grille initiale. Si une condition n'est pas respectee, 
 * la grille n'est pas valide et on affiche "Erreur" + saut de ligne. */

void	ft_putchar(char c);

void	is_initial_valid(int argc, char **argv)
{
	if (is_numeric_or_empty(argc, **argv)) 
	{
		if (nine_rows(argc))
		{	
			if (nine_cells(argc, **argv))
			{
				if (nb_full_cells(argc, **argv))
				{	
					grille_initiale(argc, **argv);
				}
			}
		}
	}
	else 
		write(1, "Erreur", 6);
	ft_putchar('\n');
}

int		is_numeric_or_empty(int argc, char **argv)
{
	int i;
	int j;
	int erreur;

	i = 0;
	j = 0;
	erreur = 0;
	while (i <= 8)
	{
		while (j <= 8)
		{
			if (argv[i + 1][j] > '9' || argv[i + 1][j] <= '0' && argv[i + 1][j] >= '.')
			{	
				erreur = erreur + 1;
				j = j + 1
			}
		}
		i = i + 1;
	}
	if (erreur >= 1)
	{	
		return (0);
	}
}

int		nine_rows(int argc)
{
	if (argc > 9)
	{	
		return (0);
	}
}

int		nine_cells(int argc, char **argv)
{
	int i;
	int j;
	count;

	i = 1; 
	count = 0;
	while (i <= argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{ 
			j = j + 1;
		}
		if (j > 8)
			count = count + 1;
		i = i + 1;
	}
	if (count > 1) 
	{	
		return (0);
	}
}

int		nb_full_cells(int argc, char **argv)
{
	int count;
	int i;
	int j; 

	i = 0;
	j = 0;
	count = 1;
	while (i <= argc) 
	{
		while (j <= argc)
		{	
			if (argv[i + 1][j] == ".")
				count = count + 1;
			j = j + 1;
		}
		i = i + 1;
	}
	if (count > 64)
	{
		return (0);
	}
}
