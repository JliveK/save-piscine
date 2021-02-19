/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:20:05 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/13 18:29:40 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char x)
{
	write(1 ,&x, 1);
}

void ft_print_comb2(void)
{
	char a;
	char b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		ft_putchar(a / 10 + '0');
		ft_putchar( a % 10 + '0');
		ft_putchar(' ');
		ft_putchar(b / 10 + '0');
		ft_putchar(b % 10 + '0');
		if (a < 98)
			write(1, ", ", 2);
		if (++b > 99)
			b = ++a + 1;
	}
}

int main()
{
	ft_print_comb2();
	return (0);
}
