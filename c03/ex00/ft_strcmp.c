/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:12:19 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/20 11:28:48 by jmauro           ###   ########.fr       */
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


# include<stdio.h>
# include <string.h>
int main ()
{	
	char s1[]="hello";
	char s2[]="&";
	printf("ft_strcmp %d\n", ft_strcmp(s1,s2));
	printf("strcmp %d\n\n", strcmp(s1,s2));

	char sa[]="hellohi";
	char sb[]="hello";
	printf("ft_strcmp %d\n", ft_strcmp(sa,sb));
	printf("strcmp %d\n\n", strcmp(sa,sb));

	char sy[]="hello";
	char sz[]="helloblabla";
	printf("ft_strcmp %d\n", ft_strcmp(sy,sz));
	printf("strcmp %d\n\n", strcmp(sy,sz));

	char sc[]="he";
	char sd[]="ho";
	printf("ft_strcmp %d\n", ft_strcmp(sc,sd));
	printf("strcmp %d\n\n", strcmp(sc,sd));

	char se[]="";
	char sf[]="bonjour";
	printf("ft_strcmp %d\n", ft_strcmp(se,sf));
	printf("strcmp %d\n\n", strcmp(se,sf));

	char sg[]="bonjour";
	char sh[]="";
	printf("ft_strcmp %d\n", ft_strcmp(sg,sh));
	printf("strcmp %d\n\n", strcmp(sg,sh));
}