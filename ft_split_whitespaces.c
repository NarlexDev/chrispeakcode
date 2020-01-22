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
    return j; 
}

int word_size(char *str)
{
    int i;
    int j;

    i = 0;
    
    while((test_alpha(str[i]) == 1))
    {    
        i++;
        printf("%d \n", j);
    }
    return (i);
}

char *ft_strcpy(char *dest, char *str)
{
    int i;

    i = 0;
    while(test_alpha(str[i]) != 0)
    {
        dest[i] = str[i];
        i++;
        
    }
    
    return (dest);
}

char **ft_split_whitespaces(char *str)
{   
    
    int i;
    int j;
    int k;
    char *word;
    char **words;

    k = 0;
    i = 0;
    j = 0;
    
    words = (char**)malloc(sizeof(char) * (how_many_words(str) + 1));
    words[how_many_words(str) + 1] = 0;
    printf("%d \n", *words);
    
    while(str[i] != 0)
    {
        while(test_alpha(str[i]) == 1)
        {
            word = (char*)malloc(sizeof(char) * (word_size(str) + 1));
            while( k++ < (word_size(str) + 1)) 
            {   
                word[j] = 0; 
            }    
            words[j] = ft_strcpy(word, str);
            i++;  
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