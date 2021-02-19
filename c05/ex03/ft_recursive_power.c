/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 10:35:08 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/18 17:12:58 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return 0;
	if (power < 0)
		return (1);
	return (nb + ft_recursive_power(nb , power - 1));
}

#include <stdio.h>
int main()
{
	printf("%d\n", ft_recursive_power(2, 2));
	return (0);
}