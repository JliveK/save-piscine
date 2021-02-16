/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr copy 2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 08:30:25 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/16 13:23:02 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *to_find)
{
	int x;
	
	x = 0;
	while (to_find [x] != '\0')
		++x;
	return (x);
}
	

int 	ft_comp(char *str, char *to_find)
{
	int x;
	
	x = 0;
	
	while (x < y)
		{
			if (to_find[y] != str[x])
				return (0);
			x++;
		}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;
	int n;
	
	x = 0;
	y = 0;
	n = ft_comp(to_find);
	
	if (to_find[0] == '\0')
		return(str);
	while ( str[x] != '\0')
	{
		if (ft_comp(&str[x], &to_find[y],n ))
		(
			return(&str[x]);
		)
		++x;
	}
	return (0)
	
#include <string.h>
#include <stdio.h>
int main () 
{
	char str[] = "julien mait vit en Belgique mais est Francais";
	char to_find[] = "mais";
	printf("is        -->");
	printf("%s\n", ft_strstr(str, to_find));	
	printf("should be -->mais est Francais");
	return(0);
}