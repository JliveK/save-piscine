/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:15:43 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/22 14:14:37 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int y;
	int ret;
	int neg;

	y = 0;
	ret = 0;
	neg = 1;
	while (str[y] == ' ' || str[y] == '\t' || str[y] == '\n' ||
		str[y] == '\r' || str[y] == '\v' || str[y] == '\f')
	{
		++y;
	}
	while (str[y] == '-' || str[y] == '+')
	{
		if (str[y] == '-')
			neg = -neg;
		++y;
	}
	while (str[y] && (str[y] >= '0' && str[y] <= '9'))
	{
		ret = ret * 10 + (str[y] - 48);
		++y;
	}
	return (ret * neg);
}


# include <stdio.h>
int main ()
{
	char test[]="	---+--+1234ab567";
	printf("%d\n",ft_atoi(test));
	printf("should be -1234 \n\n");

	char test1[]="       \n      +33467b3662ab567";
	printf("%d\n",ft_atoi(test1));
	printf("should be 33467 \n\n");

	char test2[]="  \v  -+2147483647zzzz";
	printf("%d\n",ft_atoi(test2));
	printf("should be - 2147483647 \n\n");

	char test3[]="++99";
	printf("%d\n",ft_atoi(test3));
	printf("should be 99 \n\n");

	char test4[]="  \f --52re&";
	printf("%d\n",ft_atoi(test4));
	printf("should be 52 \n\n");

	char test5[]="aa+1234ab567";
	printf("%d\n",ft_atoi(test5));
	printf("should be 0 \n\n");

	char test6[]="eeeer-----ab567";
	printf("%d\n",ft_atoi(test6));
	printf("should be 0 \n\n");
}