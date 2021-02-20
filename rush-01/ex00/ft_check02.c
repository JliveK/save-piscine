/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check02.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 16:00:58 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/20 20:45:52 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_check_colone_left(char **mat, int y, int nb)
{
	int i;
	
	i = 1;
	while (i < nb)
	{
		if (mat[0][y] == '4')
			(mat[i][y] = (i + 48));
		if (mat[0][y] == '1')
			(mat[1][y] = '4');
		++i;
	}
}

void	ft_check_lign_up(char **mat, int x, int nb)
{
	int i;
	
	i = 1;
	while (i > nb)
	{
		if (mat[0][y] == '4')
			(mat[i][y] = (i + 48));
		if (mat[0][y] == '1')
			(mat[nb - 1][y] = '4');
		++i;
	}
}

void	ft_check_colone_right(char **mat, int y, int nb)
{
	int i;
	
	i = 1;
	while (i < nb)
	{
		if (mat[0][y] == '4')
			(mat[i][y] = (i + 48));
		if (mat[0][y] == '1')
			(mat[1][y] = '4');
		++i;
	}
}

int	ft_check_ligne_down(char **mat, int x, int nb)
{
	int i;
	
	i = 1;
	while (i > nb)
	{
		if (mat[0][y] == '4')
			(mat[i][y] = (i + 48));
		if (mat[0][y] == '1')
			(mat[1][y] = '4');
		++i;
	}
}
