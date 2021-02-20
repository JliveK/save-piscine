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

#include <stdlib.h>
#include <stdio.h>

int        main(void)
{

	// base invalide
    printf("base 10 (0123456780) double caractere");
    ft_putnbr_base(-2147483648, "0123456780");
	printf("|\n should be : ");

    printf("\n\nbase 10 (01234-6789) un moins dans la base");
    ft_putnbr_base(-2147483648, "01234-6789");
	printf("|\n should be : ");
	
    // int min
    printf("\n\nbase 10 (0123456789) :-2147483648 \n");
    ft_putnbr_base(-2147483648, "0123456789");
	printf("|\n should be : -2147483648");
    
    printf("\n\nbase 10 (0123456789) :2147483647 \n");
    ft_putnbr_base(2147483647, "0123456789");
	printf("|\n should be : 2147483647");
    
    printf("\n\nbase 2 (01) :-2147483648 \n");
    ft_putnbr_base(-2147483648, "01");
	printf("|\n should be : -10000000000000000000000000000000");

    printf("\n\nbase 16 (0123456789abcdef) :-2147483648|\n");
    ft_putnbr_base(-2147483648, "0123456789abcdef");
	printf("|\n should be : -80000000 ");
    
    // base speciale    
    printf("\n\nbase 9 (poneygris) :-2147483648|\n");
    ft_putnbr_base(-2147483648, "poneygris");
	printf("|\n should be : -gyisiierin ");

	printf("\n\nbase 9 (poneygris) :2147483647|\n");
    ft_putnbr_base(2147483647, "poneygris");
	printf("|\n should be : gyisiierio ");

	printf("\n\nbase 9 (poneygris) :345|\n");
    ft_putnbr_base(-345, "poneygris");
	printf("|\n should be : -yne ");
	
    // normaux
    printf("\n\nbase 2 (01) :42|\n");
    ft_putnbr_base(42, "01");
	printf("|\n should be : 101010 ");
    
    printf("\n\nbase 16 (0123456789abcdef) :42|\n");
    ft_putnbr_base(42, "0123456789abcdef");
	printf("|\n should be : 2a ");

    printf("\n\nbase 16 (0123456789abcdef) :-19|\n");
    ft_putnbr_base(-19, "0123456789abcdef");
	printf("|\n should be : -13 ");

	printf("\n\nbase 2 (01) :-19|\n");
    ft_putnbr_base(-19, "01");
	printf("|\n should be : -10011 ");

    printf("\n\nbase 2 (01) :0|\n");
    ft_putnbr_base(0, "01");
	printf("|\n should be :  ");

    printf("\n\nbase 10 (0123456789) :-1|\n");
    ft_putnbr_base(-1, "0123456789");
	printf("|\n should be : -1 ");

}