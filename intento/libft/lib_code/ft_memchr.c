#include <stddef.h>
#include <stdio.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    char *assign_str = (char *)str;
    size_t counter;

    counter = 0;
    while(counter < n-1)
    {
        if(assign_str[counter] == c)
        {
            printf("%p \n", &assign_str+ counter);
            printf("%p \n", &assign_str[counter]);
        return(assign_str+ counter);
        }
            
        counter++;
    }
    return(0);
}
/* #include <stdio.h>
#include <string.h>
int main () 
{
   const char str[] = "This is just a String"; 
   const char ch = 'S'; 
   char *p;

   p = memchr(str, ch, 18);
   printf("String starting from %c is: %s \n", ch, p);

   printf("String starting from %c is: %s \n", ch, ft_memchr(str, ch,18));
   return (0);
} */