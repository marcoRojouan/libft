#include <stdlib.h>

int ft_count_words(char *str, char sep)
{
    int count = 0;
    int in_words = 0;
    int i = 0;        

    while (str[i])
    {
        if(str[i] != sep && in_words == 0)
        {
            in_words = 1;
            count++;
        }
        else if(str[i] == sep)
            in_words = 0;
        i++;
    }
    return (count);
}

char *ft_strndup(char *str, int len)
{
    char *duplicata;
    int i; 

    duplicata = NULL;
    duplicata = malloc(sizeof(char) * len + 1);
    if (!duplicata)
        return (0);

    i = 0;

    while (i < len)
    {
        duplicata[i] = str[i];
        i++;
    }

    duplicata[i] = '\0';
    return (duplicata);
}

char    **ft_split(char *str, char sep)
{
    char    **tab;
    int i = 0;
    int j = 0;
    int word_count =  ft_count_words(str, sep);
    int word_len;
    int start;

    tab = NULL;
    tab = malloc(sizeof(char *) * (word_count + 1));
    if(!tab)
        return (0);
    while (str[i])
    {
        if (str[i] != sep)
        {
            start = i;
            while (str[i] && str[i] != sep)
                i++;
            word_len = i - start;
            tab[j] = ft_strndup(&str[start], word_len);
            j++;
        }
        else
            i++;
    }
    tab[j] = NULL;
    return (tab); 
}
