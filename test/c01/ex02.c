

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:43:28 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/10 17:20:22 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;

    c = *a;
    *a = *b;
    *b = c;
}

int main ()
{
    int a = 5;
    int b = 3;

	ft_swap(&a,&b);
    printf ("%d\n",a);
    printf ("%d\n",b);

}