#include <unistd.h>
#include <stdio.h>
int puissance(int a, int exp)
{
    int j;

    j = a;
    while(exp > 0)
    {
        if(exp == 1)
            return (a);
        a = a * j;
        exp--;
    }
    return (a);
}
void divpardix(unsigned int nb, int i)
{
    nb = nb / (puissance(10,i));
    nb = 48 + nb % 10;
    write(1,&nb,1); 
}
void ft_putnbr(int nb)
{
    int i;

    i = 1;
    if(nb < 0)
    {   
        nb = -nb; 
        write(1,"-",1);
    }    
    while((nb - puissance(10,i)) > 0)
    {
        i++;
    }
    i--;
    while(i > 0)
    {
        
        divpardix(nb,i);
        i--;
    }
    nb = nb % 10 + 48;
    write(1,&nb,1);   
}
int main()
{
    ft_putnbr(-12745227);   
}