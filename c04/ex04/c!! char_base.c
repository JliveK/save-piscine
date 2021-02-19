#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

char ft_size(char *base)
{
    int x;
    x=0;
    while (base[x] != '\0')
    {
        ++x;
    }
    return (x);
}
int    ft_checkbase(char *base, int n)
{
    int x;
    int y;

    x = 0;
    y = 1;
    if (n < 2)
        return(0);
    while (base[x] != '\0')
    {
        if ((base[x] == '+') ^ (base[x]  == '-'))
            return(0);
        while (base[y] != '\0')
        {
            if (base[y] == base[x])
                return(0);
            y++;
        }
        ++x;
        y= x + 1;
    }
    return(1);

}

void    ft_putnbr_base(int nbr, char *base)
{
    int n;
    int a[100];
    int x;

    x = 0;
    n = ft_size(base);
    if (nbr == 0)
        ft_putchar('0');
    else if (ft_checkbase(base, n))
    {
        if (nbr < 0)
            ft_putchar('-');
        if (nbr > 0)
            nbr = nbr * -1;
        while (nbr < 0)
        {
            a[x] = nbr % n;
            nbr = nbr / n;
            x++;
        }
        while (--x >= 0)
            ft_putchar(base[-a[x]]);
    }
    else
        ft_putchar('\0');
}