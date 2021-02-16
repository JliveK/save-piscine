/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:12:19 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/15 20:52:07 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int ft_strcmp(const char *s1, const char *s2)
{
	int x;
	
	x =0;
	while ((s1[x] != '\0') || (s2[x] != '\0'))
	{
		if ( s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}


#include <string.h>
#include <stdio.h>
int main()
{
	const char x[] = "Salut les copain";
	const char y[] = "Salut les copains";
	printf("%d\n", ft_strcmp(x, y));
}