/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 19:48:20 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/14 20:16:52 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int ft_str_is_numeric(char *str)
{
	int x;
	
	x = 0;
	while (str[x] != '\0')
	{
		if (ft_numeric(str[x]) == 0)
			return (0);
		++x;
	}
	return (1);
}


# include<stdio.h>
int main ()
{
	printf("%d\n", ft_str_is_numeric("01234569"));
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric("01hello9"));
}