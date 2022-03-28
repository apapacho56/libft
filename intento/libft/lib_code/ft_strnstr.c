#include <stddef.h>
#include <stdio.h>


size_t ft_strlen(const char *str)
{
    size_t count;
    
    count = 0;
    while(str[count])
        count++;
    return(count);
}

const char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t offset;
    size_t counter;
    size_t len_neddle;

    len_neddle = ft_strlen(needle);
    counter = 0;
    offset = 0;
    while(counter < len)
    {
        if(haystack[counter] == needle[offset])
            offset++;
        counter++;
    }
    //printf("offset :%zu \n", offset);
    //printf("len_needle :%zu \n", len_neddle);
    if(offset >= len_neddle)
       return(haystack + counter - offset);
    return (0);
}


/* #include <stdio.h>
#include <string.h>


int main () {
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "rial";
   char *ret;

   ret = strnstr(haystack, needle,7);

   printf("The substring in    strnstr is: %s\n", ret);
   //ft_strnstr(haystack, needle,7);
   printf("The substring in ft_strnstr is: %s\n", ft_strnstr(haystack, needle,7));
   
   return(0);
} */