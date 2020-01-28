#include <unistd.h>
#include <stdio.h>

void ft_swap(char *str)
{
    int i;
    int nb;
    int k;
   
    k = 0;
    i = 0;
    nb = 0;
    while(str[i] != 0)
    {
        k= str[i] % 12;
        nb = k + 48;
        write(1,&nb,1);
        i++;
    }
}



int main()
{
    int j = 50;
    char *str;
    str = "2498";
    ft_swap(str);   
}