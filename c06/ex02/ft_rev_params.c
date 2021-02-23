/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 09:21:33 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/23 09:48:21 by jmauro           ###   ########.fr       */
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
	while(argv[i][1])
	{
		if (argc > i)
		ft_putchar(argv[i]);
		write(1, "\n", 1);
		--argc;
	}
	return(0);
}
