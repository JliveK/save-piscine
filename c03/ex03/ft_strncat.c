/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:23:11 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/22 14:09:26 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{ 
	unsigned int x;
	unsigned int y;
	
	x = 0;
	y = 0;
	
	while (dest[x] != '\0')
		{
			x++;
		}	
	while ((y < nb) && (src[y] != '\0'))
		{
			dest[x + y] = src[y];
			y++;
			
		}
	dest[x + y] = '\0';
	return(dest);
}

# include<stdio.h>
# include <string.h>
int main ()
{	
	char d1[50]="bien";
	char s2[]="le bonsoir";	
	int a = 2;
	printf("ft_strncat %s\n", ft_strncat(d1,s2,a));

	char da[]="tic";
	char sb[]="tac";
	int b= 3;
	printf("ft_strncat %s\n", ft_strncat(da,sb,b));

	char dy[]="pantoufle";
	char sz[]="canapé";
	int c = -8;
	printf("ft_strncat %s\n", ft_strncat(dy,sz,c));

	char dc[]="hey";
	char sd[]="hoi";
	int d = 0;
	printf("ft_strncat %s\n", ft_strncat(dc,sd,d));

	char de[]="";
	char sf[]="bonjour";
	int e = 10;
	printf("ft_strncat %s\n", ft_strncat(de,sf,e));

	char dg[]="girafe";
	char sh[]="";
	int f = 20;
	printf("ft_strncat %s\n", ft_strncat(dg,sh,f));
}
