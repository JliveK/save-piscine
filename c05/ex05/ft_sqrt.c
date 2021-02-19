/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:34:09 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/18 20:32:35 by jmauro           ###   ########.fr       */
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
int main()
{
	printf("%d\n", ft_sqrt(81));
	return (0);
}