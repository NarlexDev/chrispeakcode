#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb)
{
    int dm;
    int m;
    int c;
    int d;
    int u;

    dm = nb / 10000;
    dm = 48 + dm % 48;
    write(1,&dm,1);

    m = nb / 1000;
    m = 48 + m % 10;
    write(1,&m,1);

    c = nb / 100;
    c = 48 + c % 10;
    write(1,&c,1);

    d = nb / 10;
    d = 48 + d % 10;
    write(1,&d,1);
    
    u = 48 + nb % 10;
    write(1,&u,1);
  
}



int main()
{
    ft_putnbr(850);   
}