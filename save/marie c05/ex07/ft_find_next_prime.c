/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:08:58 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/02/22 09:32:42 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(int nb, int i)
{
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == i)
		return (1);
	if (nb % i == 0)
		return (0);
	return (check(nb, i + 1));
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	if (check(nb, 2) == 1)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}

#include <stdio.h>
int main ()
{
	printf("%d", ft_find_next_prime(4));
	printf("should be 5 \n\n");

	printf("%d", ft_find_next_prime(7));
	printf("should be 7 \n\n");

	printf("%d", ft_find_next_prime(-56));
	printf("should be 2 \n\n");

	printf("%d", ft_find_next_prime(0));
	printf("should be 2 \n\n");

	printf("%d", ft_find_next_prime(43));
	printf("should be 43 \n\n");
}
