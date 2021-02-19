/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 20:03:05 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/14 20:28:39 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int ft_str_is_lowercase(char *str)
{
	int x;
	
	x = 0;
	while (str[x] != '\0')
	{
		if (ft_lowercase(str[x]) == 0)
			return (0);
		++x;
	}
	return (1);
}


# include<stdio.h>
int main ()
{
	printf("%d\n", ft_str_is_lowercase("hello"));
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase("HELLOggggt"));
	printf("%d\n", ft_str_is_lowercase("[@]"));
}