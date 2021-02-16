/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:02:15 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/15 10:02:09 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_lowercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	int x;
	
	x = 0;
	while (str[x] != '\0')
	{
		if (ft_lowercase(str[x]) == 1)
		{
			str[x] = str[x] +32;
		}
		++x;
	}
	return (str);
}

# include<stdio.h>
int main ()
{
	char str[] = "bAdef1Z";
	char str_b[] = "ABYZ";
	printf("%s\n", ft_strlowcase(str));
	printf("%s\n", ft_strlowcase(str_b));
}
