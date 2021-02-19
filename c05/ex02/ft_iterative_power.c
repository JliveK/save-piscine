/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 10:11:55 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/18 17:09:18 by jmauro           ###   ########.fr       */
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
int main()
{
	printf("%d\n", ft_iterative_power(3, 2));
	return (0);
}
