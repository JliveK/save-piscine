/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 09:41:58 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/22 15:53:39 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int rst;

	rst = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		rst = rst * nb;
		nb--;
	}
	return (rst);
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
	printf("should be 0 \n\n");
}
