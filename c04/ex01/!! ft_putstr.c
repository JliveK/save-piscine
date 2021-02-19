# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_putchar.c !!                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmauro <jmauro@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/19 09:57:35 by jmauro            #+#    #+#              #
#    Updated: 2021/02/19 09:57:36 by jmauro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#include <unistd.h>

void ft_putstr(char *str)
{
    int x;
    x = 0;
    while (str[x] != '\0')
    {
        write(1, &str[x], 1);
        ++x;
    }

}

 int main()
{
    char str[] = "Coucouille";
    ft_putstr(str);
}