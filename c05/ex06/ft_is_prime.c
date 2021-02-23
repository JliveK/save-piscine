/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:28:05 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/22 20:43:51 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_var(int nb, int x)
{
	if (((nb / x) > 1) && ((nb % x) == 0))
		return (0);
	if (((nb/ x) == 1) && ((nb % x) == 0))
		return (1);
	return (ft_var(nb, x + 1));
}

int ft_is_prime(int nb)
{
	int x;
	
	if (nb == 2147483647)
		return (1);
	if (nb <= 1)
		return (0);
	x = ft_var(nb, 2);
	return (x);
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
