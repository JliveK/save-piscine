/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:07:36 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/02/22 09:30:02 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(int nb, int i)
{
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	if (nb == i)
		return (1);
	if (nb % i == 0)
		return (0);
	return (check(nb, i + 1));
}

int	ft_is_prime(int nb)
{
	return (check(nb, 2));
}

#include <stdio.h>
int main ()
{
	printf("%d", ft_is_prime(4));
	printf("should be 0 \n\n");
	
	printf("%d", ft_is_prime(-7));
	printf("should be 0 \n\n");

	printf("%d", ft_is_prime(7));
	printf("should be 1 \n\n");

	printf("%d", ft_is_prime(1));
	printf("should be 0 \n\n");

	printf("%d", ft_is_prime(0));
	printf("should be 0 \n\n");

	printf("%d", ft_is_prime(131));
	printf("should be 1 \n\n");

	printf("%d", ft_is_prime(571));
	printf("should be 1 \n\n");

	printf("%d", ft_is_prime(1217));
	printf("should be 1 \n\n");

	printf("%d", ft_is_prime(29));
	printf("should be 1 \n\n");

	printf("%d", ft_is_prime(-29));
	printf("should be 0 \n\n");

	printf("%d", ft_is_prime(7451));
	printf("should be 1 \n\n");

	printf("%d", ft_is_prime(110771));
	printf("should be 1 \n\n");

	printf("%d", ft_is_prime(210));
	printf("should be 0 \n\n");
}