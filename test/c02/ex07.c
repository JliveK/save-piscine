/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 20:50:03 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/15 07:54:26 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_return(char c)
{
	return (c >= 'a' && c <= 'z');
}

char *ft_strupcase(char *str)
{
	int x;
	
	x = 0;
	while (str[x] != '\0')
	{
		if (ft_return(str[x]) == 1)
			str[x] = str[x] -32;
		++x;
	}
	return (str);
}

# include<stdio.h>
int        main(void)
{
    char    test[40] = "COUCOU les gens ca va ?";;
    
    ft_strupcase(test);
    printf("strupcase : |%s|", test);
}
