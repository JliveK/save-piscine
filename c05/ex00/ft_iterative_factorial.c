/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 09:41:58 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/19 10:19:33 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int a;
	int rst;
	
	a = 2;
	rst = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (a <= nb)
	{
		rst = a * rst;
		a++;
	}
	return (rst);
}

#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_factorial(3));
	return (0);
}
