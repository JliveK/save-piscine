/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 13:27:10 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/22 16:42:36 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	else
		return (ft_fibonacci(index-2) + ft_fibonacci(index-1));
}
#include <stdio.h>
int main ()
{
	printf("%d | should be 0\n", ft_fibonacci(0));
	printf("%d | should be 3\n", ft_fibonacci(4));
	printf("%d | should be 610\n", ft_fibonacci(15));
	printf("%d | should be -1\n", ft_fibonacci(-1));
	printf("%d | should be 28657\n", ft_fibonacci(23));
	printf("%d | should be 1836311903\n", ft_fibonacci(46));
}
