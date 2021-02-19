/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 08:42:37 by cstichel          #+#    #+#             */
/*   Updated: 2021/02/14 10:08:20 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rushm(int x, int y)
{
	int p;
	int n;

	p = 0;
	while (p < (y - 2))
	{
		ft_putchar('\n');
		ft_putchar('B');
		p++;
		n = 0;
		while (n < (x - 2))
		{
			ft_putchar(' ');
			n++;
		}
		if (x > 1)
		{
			ft_putchar('B');
		}
	}
}

void	rushb(int x, int y)
{
	int n;

	if (x > 0 && y > 1)
	{
		ft_putchar('\n');
		ft_putchar('C');
		n = 0;
		while (n < (x - 2) && y > 1)
		{
			ft_putchar('B');
			n++;
		}
		if (x > 1 && y > 1)
		{
			ft_putchar('A');
		}
	}
	if (x > 0 && y > 0)
	{
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int n;

	if (x > 0 && y > 0)
	{
		ft_putchar('A');
	}
	n = 0;
	while (n < (x - 2) && y > 0)
	{
		ft_putchar('B');
		n++;
	}
	if (x > 1 && y > 0)
	{
		ft_putchar('C');
	}
	rushm(x, y);
	rushb(x, y);
}
