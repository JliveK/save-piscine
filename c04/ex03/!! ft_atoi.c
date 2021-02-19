#include <stdio.h>

int ft_atoi(char *str)
{
    int a;
    int x;
    int y; 
    x = 0;
    y = 0;
    a = 1;
    while ((str[y] != '\0') && (str[y] < 33  str[y] > 126))
    {
        ++y;
    }
    while ((str[y] != '\0') && ((str[y] == '-')  (str[y] == '+')))
    {
        if (str[y] == '-')
            a = a * -1;
        ++y;
    }
    while ((str[y] != '\0') && (str[y] >= '0') && (str[y] <= '9'))
    {
        x = x * 10 + str[y] - '0';
        ++y;
    }
    x = a * x;
    return (x);
}
int main ()
{
    char test[]="      ---+--+1234ab567";
    printf("%d\n",ft_atoi(test));
    char test1[]="    \f+123333b3662ab567";
    printf("%d\n",ft_atoi(test1));
    char test2[]="    -+2147483647zzzz";
    printf("%d\n",ft_atoi(test2));
    char test3[]="++9999999999999999999";
    printf("%d\n",ft_atoi(test3));
    char test4[]=" --52re&";
    printf("%d\n",ft_atoi(test4));
    char test5[]="aa+1234ab567";
    printf("%d\n",ft_atoi(test5));
    char test6[]="eeeer-----ab567";
    printf("%d\n",ft_atoi(test6));
}