/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 10:11:55 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/22 15:55:00 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int rst;

	rst = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
		{
		rst *= nb;
		power--;
		}
	return(rst);
}

#include <stdio.h>
int main  ()
{
	printf("%d \n",ft_iterative_power(0,0));
	printf("should be 1\n\n");
	printf("%d \n",ft_iterative_power(12,-1));
	printf("should be 0\n\n");
	printf("%d \n",ft_iterative_power(-12,2));
	printf("should be 144\n\n");
	printf("%d \n",ft_iterative_power(13,4));
	printf("should be 28561 \n\n");
	printf("%d \n",ft_iterative_power(123,3));
	printf("should be 1860867 \n\n");
}
