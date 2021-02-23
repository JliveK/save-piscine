/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:57:57 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/02/22 09:22:41 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb = nb * ft_recursive_factorial(nb - 1));
}
#include <stdio.h>
int main  ()
{
	printf("%d \n",ft_recursive_factorial(4));
	printf("should be 24\n\n");
	printf("%d \n",ft_recursive_factorial(0));
	printf("should be 1\n\n");
	printf("%d \n",ft_recursive_factorial(13));
	printf("should be 1932053504\n\n");
	printf("%d \n",ft_recursive_factorial(1));
	printf("should be 1\n\n");
	printf("%d \n",ft_recursive_factorial(-1));
	printf("should be 0\n\n");
}