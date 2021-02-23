/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 09:45:49 by jmauro          #+#    #+#             */
/*   Updated: 2021/02/21 12:53:47 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**ft_generate_tab(int size, char **argv);
int		ft_fill_tab(char **str, int size);
char	**ft_free_tab(int i, char **tab);

void	ft_print_error(void)
{
	write(1, "Error\n", 6);
}

int		ft_sqrt(int nb)
{
	long	min;
	long	max;
	long	mid;

	max = nb + 1;
	min = 0;
	while (max - min >= 2)
	{
		mid = (min + max) / 2;
		if (mid * mid <= nb)
			min = mid;
		else
			max = mid;
	}
	if (min * min == nb)
		return ((int)min);
	return (0);
}

int		ft_isvalid(char *str)
{
	int		count;
	int		i;

	i = 2;
	count = 0;
	if ((str[0] >= '1' && str[0] <= '4') && str[1] == ' ')
		count++;
	else
		return (0);
	while (str[i - 1])
	{
		if ((str[i] >= '1' && str[i] <= '4') && str[i + 1] == 32)
			count++;
		else if ((str[i] >= '1' && str[i] <= '4') && str[i + 1] == 0)
			count++;
		else
			return (0);
		i += 2;
	}
	if (ft_sqrt(count) != 4)
		return (0);
	return (ft_sqrt(count));
}

int		main(int argc, char **argv)
{
	int		i;
	char	**mat;

	if (argc == 2 && (i = ft_isvalid(argv[1])) != 0)
	{
//	if (argc == 1 && i == 4) //a retirer quand argv sera opérationnel
//	{							// a retirer quand argv sera opérationnel
		if (!(mat = ft_generate_tab(i, argv)))
		{
			ft_print_error();
			return (0);
		}
		if (ft_fill_tab(mat, i) == 0)
		{
			ft_print_error();
			return (0);
		}
		ft_free_tab(i, mat);
	}
	else
		ft_print_error();
	return (0);
}
