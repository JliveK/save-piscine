/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:23:11 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/15 19:56:25 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	char x;
	char y;
	
	x = 0;
	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}	
	while (src[x] != '\0')
	{
		dest[x + y] = src[x];
		x++;
	}
	dest[x + y] = '\0';
	return(dest);
}



#include <stdio.h>
int main()
{
	char x[] = "";
	char y[] = "rirora";
	printf("%s\n", ft_strcat(y, x));
}