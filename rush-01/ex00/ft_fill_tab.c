/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedebies <nedebies@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:01:20 by nedebies          #+#    #+#             */
/*   Updated: 2021/02/20 21:23:09 by nedebies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_poseallhint(char **mat, int nb);
int ft_fillgaps(char **tab, int size);

void	ft_write_tab(char **tab, int size) //ne fait qu'écrire sur terminal atm
{
	int x;
	int y;

	y = 0; // set y à 1 après le debug
	while (y <= size + 1) // retirer +1 après le debug
	{
		x = 0; // set x à 1 après le debug
		while (x <= size + 1) // retirer +1 après le debug
		{
			ft_putchar(tab[x][y]);
			if (x < size + 1) // retirer +1 après le debug
				ft_putchar(32);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

int		ft_fill_tab(char **tab, int size)
{
	ft_poseallhint(tab, size + 1);
	if (ft_fillgaps(tab, size) == 0)
		return (0);
	ft_write_tab(tab, size);
	return (1);
}