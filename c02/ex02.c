/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 11:21:29 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/14 19:39:35 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int		ft_str_is_alpha(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if  ((ft_alpha(str[x])) == 0)
			return(0);
		++x;
	}return(1);
}

# include<stdio.h>
int main ()
{
	printf("%d\n", ft_str_is_alpha("Hello"));
	printf("%d\n", ft_str_is_alpha(""));
	printf("%d\n", ft_str_is_alpha("He:ll="));
	printf("%d\n", ft_str_is_alpha("0122"));
}