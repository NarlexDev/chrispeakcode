#include <stdlib.h>
#include <stdio.h>


int  ft_strlen(char *str)
{
    int a = 0;
    while(*str  != '\0')
    {
        *str++;
         a++;
    }
    return a;
} 
int len_argvs(int argc, char **argv)
{
    int i;
    int a;
    int b;

    a = 0;
    b = 0;
    i = 1;

    while(i < argc)
    {
        a = ft_strlen(argv[i]);
        b = b + a;
        i++;
    }
    printf("%d \n",b);
    return b;
}

char  *strcat(char *dest, char *src)
{
    int i;
    int j;

   
    i = 0;
    j = 0;
    while(dest[i] != 0)
    {
        i++;
    }
    while(src[j] != 0)
    {
        dest[i + j] = src[j];
        j++;   
    }
    dest[i + j] = 0;
    return dest;  
}

char *ft_contact_params(int  argc, char **argv)
{
    int b;
    char *tab;
    int i;

    i = 1;
    b = len_argvs(argc,argv);
    tab = (char*)malloc(sizeof(char) * (b + 1));
    while ( i < argc)
    {
        strcat(tab, argv[i]);
        strcat(tab, "\n");
        
        i++;
    }

    return tab;     
}

int main (int argc, char **argv)
{   
    char *result;

    result = ft_contact_params(argc,argv);
    printf("%s",result);
    return (0);
}
