/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:28:05 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/19 09:46:29 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_var(int nb, int x)
{
	if (((nb / x) > 1 ) && ((nb % x) == 0))
		return (0);
	if (((n / x) == 1) && ((nb % x) == 0))
		return (1);
	return (ft_verx(nb, x + 1));
}

int ft_is_prime(int nb)
{
	int x;
	
	
	if (nb <= 1)
		return (0);
	x = ft_varx (nb, 2);
	return (x);
}

#include <stdio.h>
int main()
{
	
}
