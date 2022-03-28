#include <stddef.h>

size_t ft_strlen(const char *str)
{
    size_t count;
    
    count = 0;
    while(str[count] != '\0')
        count++;
    return(count);
}


size_t ft_strlcat(char * restrict buffer, const char * restrict dst, size_t dstsize)
{
    size_t count;
    size_t len_dst;//dstsize - strlen(dst) - 1 characters
    size_t len_buffer;
    size_t limit;
    
    len_dst = ft_strlen(dst);
    len_buffer = ft_strlen(buffer);
    
    limit = len_buffer;
    count = 0;
    if(limit > dstsize)
        return(len_dst + dstsize);
    dstsize--;
    if( limit== dstsize)
        return(len_dst + dstsize);
    while(dst[count] != '\0')
    {
        buffer[limit]=dst[count];
        limit++;
        count++;
        if( limit== dstsize)
            break;
    }
    buffer[limit] = '\0';
    return(len_buffer+len_dst);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char src[] = "condadenando ";
	char dst[] = "muchas de las cadenas";
    size_t r;
    size_t s;
    r=0;
    s=0;
    char buffer_1[100];
    strcpy(buffer_1,src);
	printf("source       : %s\n", src);
    printf("destination  : %s\n", dst);
	
    char buffer_2[100];
    strcpy(buffer_2,src);
   
	r = ft_strlcat(buffer_2, dst, 15);
    printf("ft_strlcat  : %s\n", buffer_2);
    
    s= strlcat(buffer_1, dst, 15);
    printf("   strlcat  : %s\n", buffer_1);
	printf("   strlcat size: %zu\n", s);
    printf("ft_strlcat size: %zu\n", r);
} */