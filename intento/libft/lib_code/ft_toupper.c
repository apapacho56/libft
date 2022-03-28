int ft_toupper(int c)
{
    if(c < 'z' && c < 'a')
    {
        c = c + 32; 
        return(c);
    }
    return(c);
}

/* #include <stdio.h>
#include <ctype.h>
int main(void)
{
    int c;
    c = 'B';
    printf("La letra es: %c \n" ,ft_toupper(c));
    printf("La letra es: %c \n" ,toupper(c));
    return(0);
} */