#include <unistd.h>
#include <stdio.h>
#include <string.h>



void ft_putchar(char c)
{
    write(1,&c,1);
}

void putstr(char  *str)
{
    int i;

    i = 0;
    while(str[i] != 0)
    {
        ft_putchar(str[i]);
        i++;
    }

}

void ft_sort_params(int argc,char **argv)
{
    int i; 

    i = 1;
    while(i < argc)
    {
               
        putstr(argv[i]);
        ft_putchar('\n');
        i++;
       
    }
}

int main (int argc, char **argv)
{  
    ft_sort_params(argc,argv);
    return (0);
}