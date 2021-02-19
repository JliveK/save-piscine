/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 18:38:27 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/13 20:04:06 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int y = 0;
	while( src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = '\0';
	return(dest);
}

int		main()
{
	char src[6] = "hello";
	char dest[6] = "xoxox";
	ft_strcpy(dest, src); 
	printf("%s\n", src);
	printf("%s\n", dest);
}
