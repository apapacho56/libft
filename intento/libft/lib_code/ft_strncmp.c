#include <stddef.h>
#include <stdio.h>

int ft_strlen(const char *str)
{
    unsigned int count;
    
    count = 0;
    while(str[count] != '\0')
        count++;
    return(count);
}

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t counter;

    counter = 0;    
    while(counter < n-1 && s1[counter] != '\0' && s2[counter] != '\0' && s1[counter] == s2[counter])
    {
        counter++;
    }
    return (s1[counter] - s2[counter]);
} 

#include <stdio.h>
#include <string.h>

int main () 
{
   char str1[20]="heOlo";
   char str2[20]="helLO WORLD";
   int result;

   
   result = strncmp(str1, str2, 8);

   printf("the    strncmp is : %d \n", result);
  // ft_strncmp(str1, str2, 8);
   printf("the ft_strncmp is : %d \n", ft_strncmp(str1, str2, 8));

   return (0);
}