/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:04:08 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/02/22 09:29:06 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	test(int nb, int y)
{
	if (nb / y == 1)
		return (0);
	if (nb / y == y && nb % y == 0)
		return (y);
	return (test(nb, y + 1));
}

int	ft_sqrt(int nb)
{
	int y;

	if (nb == 0 || nb == 1)
		return (nb);
	y = test(nb, 1);
	return (y);
}

#include <stdio.h>
int main ()
{
	printf("racine 9 |%d|",ft_sqrt(9));
	printf("should be 3 \n\n");

	printf("racine 4 |%d|",ft_sqrt(4));
	printf("should be 2 \n\n");
	
	printf("racine 16 |%d|",ft_sqrt(16));
	printf("should be 4 \n\n");

	printf("racine 17 |%d|",ft_sqrt(17));
	printf("should be 0 (irrational) \n\n");

	printf("racine 81 |%d|",ft_sqrt(81));
	printf("should be 9 \n\n");

	printf("racine 23 |%d|",ft_sqrt(23));
	printf("should be 0 (irrational) \n\n");

	printf("racine 576 |%d|",ft_sqrt(576));
	printf("should be 24 \n\n");
}