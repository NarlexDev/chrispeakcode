#include <stdio.h>
#include <unistd.h>

int puissance(int a, int exp)
{
    int j;

    j = a;
    if(exp == 0)
        return (1);
    while(exp > 0)
    {
        if(exp == 1)
            return (a);
        a = a * j;
        exp--;
    }
    return (a);
}


int char_to_int(char *str, int exp)
{   
    int i;
    int a;
    int b;

    b = 0;
    a = 0;
    i = 0;
    while(str[i] <= '9')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            b = ((str[i] - 48) * puissance(10,exp));
            exp--;
        }
        a = b + a;   
        i++;
    }
    return (a);
}

int ft_moins_pair(int a)
{
    int i;
    
    i = 0;
    if(a % 2 == 0)
        return (a = 1);
    return (a = -1);
}

int ft_atoi(char *str)
{
    int i;
    int a;
    int exp;
    
    a = 0;
    i = 0;
    exp = 0;
    while(str[i] > 31 && str[i] < ':')
    {
        if(str[i] == '-')
            a++;
        if(str[i] >= '0' && str[i] <= '9')
            exp++;
        i++;    
    }
    
    exp--;
    i = char_to_int(str,exp);
    a = ft_moins_pair(a);
    exp = i * a;
    return (exp);
}

void main ()
{
    char *str;
    
    str ="  -++----12345abc5151";
    printf("%d",ft_atoi(str));
}