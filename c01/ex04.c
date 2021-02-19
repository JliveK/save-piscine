/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 12:00:05 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/11 15:22:58 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_divmod(int *a, int *b)
{
	int e;
	int f;
	
	e = *a;
	f = *b;
	*a = e / f;
	*b = e % f;
}

int main()
{	
	int x = 14;
	int z = 10;
	int *a;
	int *b; 
	a = &x;
	b = &z;
	
	ft_ultimate_divmod(a, b);
	printf("%d\n", x);
	printf("%d\n", z);
}