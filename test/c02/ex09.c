/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:33:19 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/15 11:38:15 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alpha(char c)
{
	return (c >= 'a' && c <= 'z') || (c >='A' && c <= 'Z') || (c >='0' && c <= '9');
}

int		ft_minus(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_capt(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strcapitalize(char *str)
{
	int m;
	int	c;

	m = 1;
	c = 0;
	while ((str[c]) !='\0')
	{
		m = 1;
		while (ft_alpha(str[c]) == 1)
		{
			if (ft_minus(str[c]) == 1 && m == 1)
				str[c] = str[c] -32;
			else if(ft_capt(str[c]) == 1 && m == 0)
				str[c] = str[c] +32;
			m = 0;
			++c;
		}
		if (str[c] != '\0')
			++c;
	
	}
	return (str);
}

# include<stdio.h>
int main ()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
}