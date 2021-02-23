/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedebies <nedebies@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:01:28 by jmauro          #+#    #+#             */
/*   Updated: 2021/02/20 15:14:15 by jmauro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_free_tab(int i, char **tab);

char	**ft_add_param(char **tab, char **argv)
{
	int count;
	int i;
	
	count = 0;
	i = 0;
	while (argv[1][i] && count < 4)
	{
		count++;
		tab[count][0] = argv[1][i];
		i += 2;
	}
	count = 0;
		while (argv[1][i] && count < 4)
	{
		count++;
		tab[count][5] = argv[1][i];
		i += 2;
	}
	count = 0;
		while (argv[1][i] && count < 4)
	{
		count++;
		tab[0][count] = argv[1][i];
		i += 2;
	}
	count = 0;
		while (argv[1][i] && count < 4)
	{
		count++;
		tab[5][count] = argv[1][i];
		i += 2;
	}
	return (tab);
}

char	**ft_generate_tab(int size, char **argv)
{
	char **tab;
	int x;
	int y;

	if (!(tab = malloc(sizeof(char *) * size + 2)))
		return (NULL);
	x = 0;
	while (x < size + 2)
	{
		if (!(tab[x] = malloc(sizeof(char) * size + 2 + 1)))
			return (ft_free_tab(--x, tab));
		y = 0;
		while (y < size + 2)
		{
			tab[x][y] = '0';
			y++;
		}
		tab[x][y] = 0;
		x++;
	}
	ft_add_param(tab, argv);
	return (tab);
}