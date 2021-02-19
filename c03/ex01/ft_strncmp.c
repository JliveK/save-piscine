/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:59:17 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/15 15:21:02 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int x;
	
	x =0;
	while ((x <= n) && ((s1[x] != '\0') || (s2[x] != '\0')))
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}


#include <string.h>
#include <stdio.h>
int main()
{
	char x[] = "Salut les copain";
	char y[] = "Salut les copains";
	unsigned int n = 19;
	printf("%d\n", ft_strncmp(x, y, n));
}