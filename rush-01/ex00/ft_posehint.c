/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   posehint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurdu <bdurdu@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:54:23 by bdurdu            #+#    #+#             */
/*   Updated: 2021/02/20 16:07:53 by bdurdu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_posehintleft(char **mat, int y, int nb)
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
void	ft_posehintright(char **mat, int y, int nb)
{
	int i;

	i = nb -1;
	while (i > 0)
	{
		if (mat[nb][y] == '4')
			(mat[i][y] = (i + 48));
		if (mat[nb][y] == '1')
			(mat[nb - 1][y] = '4');
		--i;
	}
}
void	ft_posehintup(char **mat, int x, int nb)
{
	int i;

	i = 1;
	while (i < nb)
	{
		if (mat[x][0] == '4')
			(mat[x][i] = (i + 48));
		if (mat[x][0] == '1')
			(mat[x][1] = '4');
		++i;
	}
}
void	ft_posehintdown(char **mat, int x, int nb)
{
	int i;

	i = nb - 1;
	while (i > 0)
	{
		if (mat[x][nb] == '4')
			(mat[x][i] = (i + 48));
		if (mat[x][nb] == '1')
			(mat[x][nb - 1] = '4');
		--i;
	}
}
void ft_poseallhint(char **mat, int nb)
{
	int x;
	
	x = 1;
	while (x < nb)
	{
		ft_posehintleft(mat, x, nb);
		ft_posehintright(mat, x, nb);
		ft_posehintup(mat, x, nb);
		ft_posehintdown(mat, x, nb);
	++x;
	}
}