/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opiron <opiron@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 07:28:41 by opiron            #+#    #+#             */
/*   Updated: 2021/02/22 15:35:45 by opiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	ft_print_arr(char **arr)
{
	while (*arr)
	{
		ft_putstr(*arr++);
		ft_putchar('\n');
	}
}

void	ft_sort(char **sort, int nb)
{
	int		i;
	int		j;
	char	*x;

	i = 0;
	while (i < (nb - 1))
	{
		j = 0;
		while (sort[i][j] == sort[i + 1][j])
			j++;
		if (sort[i][j] > sort[i + 1][j])
		{
			x = sort[i];
			sort[i] = sort[i + 1];
			sort[i + 1] = x;
			i = 0;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort(argv, argc);
		ft_print_arr(argv + 1);
	}
	return (0);
}
