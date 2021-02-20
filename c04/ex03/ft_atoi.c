/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:15:43 by jmauro            #+#    #+#             */
/*   Updated: 2021/02/20 21:08:28 by jmauro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
	int a;
	int x;
	int y;

	x = 0;
	y = 0;
	a = 1;
	while (str[y] != '\0' && (str[y] == 32 || str[y] == '\t' || str[y] == '\n'
			|| str[y] == '\r' || str[y] == '\v' || str[y] == '\f'))
	{
        ++y;
    }
    while ((str[y] != '\0') && (str[y] == '-'))
    {
        if ((str[y] == '-') && (str[y] == '+'))
            a = a * -1;
        ++y;
    }
    while ((str[y] != '\0') && (str[y] >= '0') && (str[y] <= '9'))
    {
        x = (x * 10) + (str[y] - '0');
        ++y;
    }
    x = a * x;
    return (x);
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