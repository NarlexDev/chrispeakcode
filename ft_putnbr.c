#include <unistd.h>
#include <stdio.h>

int dmillier(unsigned int nb)
{
    nb = nb / 10000;
    nb = 48 + nb % 10;
    write(1,&nb,1);
}

int millier(unsigned int nb)
{
    nb = nb / 1000;
    nb = 48 + nb % 10;
    write(1,&nb,1);
}

int centaine(unsigned int nb)
{
    nb = nb / 100;
    nb = 48 + nb % 10;
    write(1,&nb,1);
}

int dizaine(unsigned int nb)
{
    nb = nb / 10;
    nb = 48 + nb % 10;
    write(1,&nb,1);
}

void ft_putnbr(int nb)
{
    if(nb < 0)
    {    nb = nb + (-2 * nb);
        write(1,"-",1);
    }    
    if(nb > 9999)
        dmillier(nb);
    if(nb > 999)
        millier(nb);
    if(nb > 99)
        centaine(nb);
    if(nb > 9)   
        dizaine(nb); 

    nb = nb % 10 + 48;
    write(1,&nb,1);   
}



int main()
{
    ft_putnbr(-15545);   
}