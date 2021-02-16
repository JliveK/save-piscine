/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 20:35:57 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/14 20:49:23 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

int ft_str_is_printable(char *str)
{
	int x;
	
	x = 0;
	while (str[x] != '\0')
	{
		if (ft_printable(str[x]) == 0)
			return (0);
		++x;
	}
	return (1);
}

# include<stdio.h>
int main ()
{
	printf("%d\n", ft_str_is_printable("hello"));
	printf("%d\n", ft_str_is_printable("hEl0"));
	printf("%d\n", ft_str_is_printable("hello\n"));
	printf("%d\n", ft_str_is_printable("\n"));
}
