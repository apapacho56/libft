
const char *ft_strchr(const char *s, int c)
{
    //unsigned int start;
    unsigned int counter;
    //int len;

    //start = 0;
    counter = 0;
    //len = ft_strlen(s);

    while(s[counter] != '\0')
    {
        if(s[counter] == c)
            return(s+ counter);
        counter++;
    }
    return(0);
}

/* #include <stdio.h>
#include <string.h>
int main () 
{
   const char str[] = "This is just a String"; 
   const char ch = 'A'; 
   char *p;

   p = strchr(str, ch);
   printf("String starting from %c is: %s \n", ch, p);

   printf("String starting from %c is: %s \n", ch, ft_strchr(str, ch));
   return (0);
} */