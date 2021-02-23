/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opiron <opiron@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 07:28:39 by opiron            #+#    #+#             */
/*   Updated: 2021/02/22 07:37:29 by opiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_name(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		write(1, str++, 1);
	}
	return (i);
}

int			main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_name(argv[argc - i]);
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
