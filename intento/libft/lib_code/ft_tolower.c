int ft_tolower(int c)
{
    if(c < 'Z' && c < 'A')
    {
        c = c - 32; 
        return(c);
    }
    return(c);
}

#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int c;
    c = 'H';
    printf("La letra es: %c \n" ,ft_tolower(c));
    printf("La letra es: %c \n" ,tolower(c));
    return(0);
}