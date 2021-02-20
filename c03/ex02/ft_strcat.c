/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:23:11 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/20 12:23:10 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	int x;
	int y;
	
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

# include<stdio.h>
# include <string.h>
int main ()
{	
	char d1[50]="bien";
	char s2[]="le bonsoir";	
	printf("ft_strcat %s\n", ft_strcat(d1,s2));
	
	char da[]="tic";
	char sb[]="tac";
	printf("ft_strcat %s\n", ft_strcat(da,sb));
		
	char dy[]="pantoufle";
	char sz[]="yo";
	printf("ft_strcat %s\n", ft_strcat(dy,sz));
	
	char dc[]="hey";
	char sd[]="hoi";
	printf("ft_strcat %s\n", ft_strcat(dc,sd));
	
	char de[]="";
	char sf[]="bonjour";
	printf("ft_strcat %s\n", ft_strcat(de,sf));
	
	char dg[]="girafe";
	char sh[]="";
	printf("ft_strcat %s\n", ft_strcat(dg,sh));

}