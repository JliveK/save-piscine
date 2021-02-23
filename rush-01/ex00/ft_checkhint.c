/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkhint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurdu <bdurdu@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:00:19 by bdurdu            #+#    #+#             */
/*   Updated: 2021/02/20 21:35:57 by bdurdu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkhintleft(char **mat, int y, int nb)
{
	int i;
	int a;
	int b;

	a = 0;
	b = 2;

	while (b <= (nb - 2))
	{
		i = 2;
		while ((mat[0][y] == (b + '0')) && (i < nb))
		{
			if ((mat[i][y] > mat[1][y]) && (a < (b - 2)))
				a++;
			if ((mat[i][y] != (nb + 47) && (a == (b - 2))))
				return (0);
			++i;
		}
		b++;
	}
	return (1);
}

int	ft_checkhintright(char **mat, int y, int nb)
{
	int i;
	int a;
	int b;

	a = 0;
	b = 2;
	while (b <= (nb - 2))
	{
		i = (nb - 2);
		while ((mat[0][y] == (b + '0')) && (i > nb))
		{
			if ((mat[i][y] > mat[nb - 1][y]) && (a < (b - 2)))
				a++;
			if ((mat[i][y] != (nb + 47)) && (a == (b - 2)))
				return (0);
			--i;
		}
		b++;
	}
	return (1);
}

int	ft_checkhintup(char **mat, int x, int nb)
{
	int i;
	int a;
	int b;

	a = 0;
	b = 2;

	while (b <= (nb - 2))
	{
		i = 2;
		while ((mat[x][0] == (b + '0')) && (i < nb))
		{
			if ((mat[x][i] > mat[x][1]) && (a < (b - 2)))
				a++;
			if ((mat[x][i] != (nb + 47)) && (a == (b - 2)))
				return (0);
			++i;
		}
		b++;
	}
	return (1);
}

int	ft_checkhintdown(char **mat, int x, int nb)
{
	int i;
	int a;
	int b;

	a = 0;
	b = 2;
	while (b <= (nb - 2))
	{
		i = (nb - 2);
		while ((mat[x][0] == (b + '0')) && (i > nb))
		{
			if ((mat[x][i] > mat[x][nb - 1]) && (a < (b - 2)))
				a++;
			if ((mat[x][i] != (nb + 47)) && (a == (b - 2)))
				return (0);
			--i;
		}
		b++;
	}
	return (1);
}

int ft_checkhint(char **mat, int nb)
{
	int x;

	x = 1;
	while (x < nb)
	{
		if (!ft_checkhintleft(mat, x, nb))
			return (0);
		if (!ft_checkhintright(mat, x, nb))
			return (0);
		if (!ft_checkhintup(mat, x, nb))
			return (0);
		if (!ft_checkhintdown(mat, x, nb))
			return (0);
	++x;
	}
	return (1);
}