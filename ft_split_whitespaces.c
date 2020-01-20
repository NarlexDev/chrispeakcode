#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int test_alpha(char c)
{
    if(c != ' ' && c != '\n' && c != '\t' && c != '\0')
        return (0);
    return (1);
}


int how_many_words(char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(str[i] != 0)
    {
        if( (test_alpha(str[i]) == 0) && (test_alpha(str[i + 1]) == 1))
            j++;
        i++;
    }
    printf("%d \n", j);
    return j; 
}
char *creation_tableau(int a)
{
    char *tab;
    int i;

    i = 0;
    tab = (char*)malloc(sizeof(char) * (a + 1));

    while(i < a + 1)
    {
        tab[i] = 0;
        i++;
        printf("%s \n", *tab);
    }
    return tab;

}

char **ft_split_whitespaces(char *str)
{   
    int wordcount;
    int i;
    int j;
    char *tab;

    wordcount = how_many_words(str);
    tab = creation_tableau(wordcount);
    
    i = 0;
    j = 0;
    while(str[i] != 0)
    {
       while((test_alpha(str[i]) == 1))
        {
            tab[j] = str[i];
            printf("%d \n", tab);
            i++;
            j++;
        }
        i++;
    }
}

int main ()
{
    char *str;

    str = "vrevr greger regerqg greq";
    ft_split_whitespaces(str);
    return(0);
}