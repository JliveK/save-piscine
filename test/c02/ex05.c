/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 20:30:00 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/14 20:33:42 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_upercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int ft_str_is_uppercase(char *str)
{
	int x;
	
	x = 0;
	while (str[x] != '\0')
	{
		if (ft_upercase(str[x]) == 0)
			return (0);
		++x;
	}
	return (1);
}

# include<stdio.h>
int main ()
{
	printf("%d\n", ft_str_is_uppercase("UEERRT"));
	printf("%d\n", ft_str_is_uppercase(""));
	printf("%d\n", ft_str_is_uppercase("UPPER:"));
	printf("%d\n", ft_str_is_uppercase("azzeer:"));
}