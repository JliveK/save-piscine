/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:13:23 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/12 19:45:52 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int x;
	
	x = 0;
	while(*str != '\0')
	{
		str++;
		x++;
	}
	return (x);
}

int 	main()
{
	char *ptr;
	char array[6];
	int tr;
	array[0] = 's';
	array[1] = 'a';
	array[2] = 'l';
	array[3] = 'u';
	array[4] = 't';
	array[5] = '\0';
	ptr = &array[0];
	tr = ft_strlen(ptr);
	printf("%d\n", tr);
	return (0);
}