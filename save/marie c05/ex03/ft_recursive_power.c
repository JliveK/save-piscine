/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:59:56 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/02/22 09:25:54 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 && nb == 0)
		return (1);
	else if (power == 0)
		return (1);
	else if (nb == 0)
		return (0);
	else if (power < 1)
		return (0);
	return (nb = nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>
int main  ()
{
	printf("%d \n",ft_recursive_power(0,0));
	printf("should be 1\n\n");
	printf("%d \n",ft_recursive_power(12,-1));
	printf("should be 0\n\n");
	printf("%d \n",ft_recursive_power(-12,2));
	printf("should be -144\n\n");
	printf("%d \n",ft_recursive_power(13,4));
	printf("should be 28561 \n\n");
	printf("%d \n",ft_recursive_power(123,3));
	printf("should be 1860867 \n\n");
}