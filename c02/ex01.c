/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:32:21 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/14 16:55:40 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	
	unsigned int i;
	
	i =0;
	while(src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i++] = '\0';
	}
	return(dest);
}

#include <stdio.h>
int		main()
{

	char src[] = "hello bonjour";
	char dest[10];
	ft_strncpy(dest, src, 8);
	printf("%c|", dest[0]);
	printf("%c|", dest[1]);
	printf("%c|", dest[2]);
	printf("%c|", dest[3]);
	printf("%c|", dest[4]);
	printf("%c|", dest[5]);
	printf("%c|", dest[6]);
	printf("%c|\n", dest[7]);

	char srcb[] = "hoi";
	char destb[10];
	ft_strncpy(destb, srcb, 8);
	printf("%c|", destb[0]);
	printf("%c|", destb[1]);
	printf("%c|", destb[2]);
	printf("%c|", destb[3]);
	printf("%c|", destb[4]);
	printf("%c|", destb[5]);
	printf("%c|", destb[6]);
	printf("%c|\n", destb[7]);


	return(0);
}
