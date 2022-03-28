int ft_strlen(char *str)
{
    unsigned int count;
    
    count = 0;
    while(str[count] != '\0')
        count++;
    return(count);
}

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[]="Hola comote va _??";
    printf("%d\n",ft_strlen(str));
    return(0);
}