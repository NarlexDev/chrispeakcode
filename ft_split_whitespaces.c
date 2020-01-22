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
    while(str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i] != '\0')
    {    
        i++;
    }
    return (i); 
}

char *ft_strcpy(char *dest, char *str)
{
    int i;

    i = 0;
    while(test_alpha(str[i]) != 1)
    {
        dest[i] = str[i];
        i++;
    }
     return (dest);
}

char **ft_split_whitespaces(char *str)
{   
    int strlen;
    int word_count;
    int word_print;
    int i;
    int j;
    int k;
    char *word;
    char **words;

    word_print = 0;
    k = 0;
    i = 0;
    j = 0;
    strlen = 0;
    word_count = how_many_words(str);
    words = (char**)malloc(sizeof(char*) * (word_count + 1));
    words[word_count] = 0;
    while(word_print < word_count)
    {
        if((test_alpha(str[i]) == 0))
        {
            strlen = word_size(&(str[i]));
            word = (char*)malloc(sizeof(char) * (strlen + 1));
            word[strlen] = 0;   
            words[j] = ft_strcpy(word, &str[i]);
            printf("%s \n", words[j]);
            j++; 
            i += strlen;
        }
        while(test_alpha(str[i]) == 1)
            i++;
        word_print++;     
    }
    return (words);            
}

int main ()
{
    char *str;

    str = "hjk k reg            erqg greq";
    ft_split_whitespaces(str);
    return(0);
}