/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 08:30:25 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/16 11:53:46 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int x;
	
	x = 0;
	while (str[x] != '\0')
		++x;
	return (x);
}
	

int 	ft_comp(char *str, char *to_find)
{
	int x;
	int to_find;
	
	while (str[x] < str[to_find])
		{
			if (str[x] = str[to_find])
			return (0);
			x++;
		}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int to_find;

	x = 0;
	y = ft_strlen(str);
	while ( x < to_find ) && (str[x] != '\0') 
	{
		if (str[x] == to_find[0] && ft_comp(&str[x], &to_find[0]) == 1)
			return(&str[x]);
		x++;
	}
	to_find++;
	return(0);
}

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