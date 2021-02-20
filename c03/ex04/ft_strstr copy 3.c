/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr copy 3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 08:30:25 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/20 12:27:48 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *to_find)
{
	int x;

	x = 0;
	while (to_find[x] != '\0')
		++x;
	return (x);
}

int		ft_comp(char *str, char *to_find, int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		if (to_find[x] != str[x])
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
	n = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		if (ft_comp(&str[x], &to_find[y], n))
		{
			return (&str[x]);
		}
		++x;
	}
	return (0);
}

# include<stdio.h>
# include <string.h>

int main ()
{
	char hay[]="zebre";
	char needle[]="br";
	printf("strstr : %s\n", strstr(hay, needle));
	printf("ft_strstr : %s\n\n", ft_strstr(hay, needle));

	char hayb[]="zebre";
	char needleb[]="chat";
	printf("strstr :%s\n", strstr(hayb, needleb));
	printf("ft_strstr : %s\n\n", ft_strstr(hayb, needleb));

	char hayc[]="";
	char needlec[]="chat";
	printf("strstr :%s\n", strstr(hayc, needlec));
	printf("ft_strstr : %s\n\n", ft_strstr(hayc, needlec));

	char hayd[]="je suis un très longue phrase";
	char needled[]="phr";
	printf("strstr : %s\n", strstr(hayd, needled));
	printf("ft_strstr : %s\n\n", ft_strstr(hayd, needled));
}