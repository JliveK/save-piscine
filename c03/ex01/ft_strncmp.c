/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:59:17 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/20 11:46:40 by jmauro           ###   ########.fr       */
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


# include<stdio.h>
# include <string.h>

int main ()
{	
	char s1[]="hello";
	char s2[]="&";
	int a=5;
	printf("ft_strncmp %d\n", ft_strncmp(s1,s2,a));

	char sa[]="hellohi";
	char sb[]="hello";
	int b=5;
	printf("ft_strncmp %d\n", ft_strncmp(sa,sb,b));

	char sy[]="hello";
	char sz[]="helloblabla";
	int c=4;
	printf("ft_strncmp %d\n", ft_strncmp(sy,sz,c));

	char sc[]="he";
	char sd[]="ho";
	int d=1;
	printf("ft_strncmp %d\n", ft_strncmp(sc,sd,d));

	char se[]="";
	char sf[]="bonjour";
	int e=0;
	printf("ft_strncmp %d\n", ft_strncmp(se,sf,e));

	char sg[]="bonjour";
	char sh[]="";
	int f=7;
	printf("ft_strncmp %d\n", ft_strncmp(sg,sh,f));
}