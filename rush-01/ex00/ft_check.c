/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 16:05:03 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/20 17:14:54 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_colone(char mat[size][size], argv *argv, int x)
{
	int	i;
	int	max_size;
	int	views;

	max_size = 0;
	views = 0;
	i = -1;
	while (++i < SIZE)
	{
		views += mat[i][x] > max_size;
		max_size = ( mat[i][x] > max_size ? mat[i][x] : max_size);
	}
	if (views != argv->up[x])
		return(0);
	max_size = 0;
	views = 0;
	while (--i >= 0)
	{
		views += mat[i][x] > max_size;
		max_size = ( mat[i][x] > max_size) ? mat[i][x] : max_size);
	}
	if (views != argv->down[x])
		return(0);
	return (1).
}

int	ft_chack_line(char mat[size][size], argv *argv, int y)
{
	int i;
	int max_size;
	int views;

	max_size = 0;
	views = 0;
	i = -1;
	while (i++ < SIZE)
	{
		views += mat [y][i] > max_size;
		max_size = ( mat[y][i] > max _size) ? mat[y][i] : max_size);
	}
	if (views != argv->right[y])
		return (0);
	return (1);
}

int	put_value(char mat[SIZE][SIZE], int x, int y, int value)
{
	int	i;

	i = -1;
	while (++i < SIZE)
		if (mat[y][i] == value || mat[i][x] == value)
			return (0);
	return (1);
}

int	search_empty_case(char mat[SIZE][SIZE], int *x, int*y)
{
	int i;
	int j;

	i = -1;
	while (++i < SIZE)
	{
		j = -1;
		while (++j < SIZE)
			if (mat[i][j] == 0)
			{
				*x = j;
				*y = i;
				return (i);
			}
	}
}