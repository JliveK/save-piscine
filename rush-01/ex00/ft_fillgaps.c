/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillgaps.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurdu <bdurdu@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 17:55:01 by nedebies          #+#    #+#             */
/*   Updated: 2021/02/20 22:56:59 by bdurdu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_doppelganger(char **tab, int x, int y, int size)
{
    int i;
    int a;

    i = 1;
    a = 0;
    while (i <= size)
    {
        if ((tab[x][y] == tab[i][y]) && tab[x][y] != '0' && (a == 0))
            a++;
        if ((tab[x][y]) == tab[i][y] && tab[x][y] != '0' && (a == 1))
            return (1);
        ++i;
    }
    i = 1;
    while (i <= size)
    {
        if ((tab[x][y] == tab[x][i]) && tab[x][y] != '0' && (a == 1))
            a++;
        if ((tab[x][y]) == tab[x][i] && tab[x][y] != '0' && (a == 2))
            return (1);
        ++i;
    }
    return (0);
}

/*int ft_is_coordvalid(void)
{
	//if (ft_doppelganger(tab, x, y, size))
	//	return (0);
	return(1);
}
*/
int ft_backtracking(char **tab, int n, int size)
{
	int i;
	int x;
	int y;
	
	i = size + 1;
	if (n == size * size + 1)
		return (1);
	x = n % size + 1;
	y = n / size + 1;
	while (--i > 0)
	{
		if (tab[x][y] == '0')
		{
			
			tab[x][y] = i + '0';
			if (!(ft_doppelganger(tab, x, y, size)))
			{
				if (ft_backtracking(tab, n + 1, size))
					return (1);
				tab[x][y] = '0';
			}
			
		}
	}
	//tab[x][y] = '0';
	return (1);//debugg
}

int ft_fillgaps(char **tab, int size)
{
	int i;
	
	i = 0;
	while (++i < size + 1)
	{
		if (((tab[i][1] - '0') + (tab[i][2] - '0') + (tab[i][3] - '0') + (tab[i][4] - '0')) > 10)
			return (0);
	}
	i = 0;
	while (++i < size + 1)
	{
		if (((tab[1][i] - '0') + (tab[2][i] - '0') + (tab[3][i] - '0') + (tab[4][i] - '0')) > 10)
			return (0);
	}
	return (ft_backtracking(tab, 0, size));	
}
