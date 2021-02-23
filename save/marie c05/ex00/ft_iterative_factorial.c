  /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:55:42 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/02/22 15:27:42 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int total;

	total = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		total = total * nb;
		nb--;
	}
	return (total);
}

#include <stdio.h>
int main  ()
{
	printf("%d \n",ft_iterative_factorial(4));
	printf("should be 24\n\n");
	printf("%d \n",ft_iterative_factorial(0));
	printf("should be 1\n\n");
	printf("%d \n",ft_iterative_factorial(13));
	printf("should be 1932053504\n\n");
	printf("%d \n",ft_iterative_factorial(1));
	printf("should be 1\n\n");
	printf("%d \n",ft_iterative_factorial(-1));
	printf("should be 0\n\n");
}