/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 21:22:10 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/23 09:20:38 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, str++, 1);
	}
}

int		main(int argc, char **argv)
{
	int i;
	
	i = 1;
	argc = 1;
	while(argv[1][i])
	{
		ft_putchar(argv[i]);
		write(1, "\n", 1);
		++i;
	}
	return(0);
}
