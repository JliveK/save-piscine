/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:34:09 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/21 16:51:50 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i;
	
	i = 1;
	if (nb < 0)
		return (0);
	while (i * i < nb)
	{
		i++;
	} 
	if (nb % i == 0)
		return(i);
	else 
		return (0);
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
