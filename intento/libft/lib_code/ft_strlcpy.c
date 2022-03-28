#include <stddef.h>

int ft_strlen(const char *str)
{
    unsigned int count;
    
    count = 0;
    while(str[count] != '\0')
        count++;
    return(count);
}

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t count;

    count =0;
    while(count < (n+1))
    {
        *(char *)(dst + count) = *(char *)(src + count);
        count++;
    }
    return(dst);
}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t len;

    len = ft_strlen(src);
	dstsize--;
    if(len > dstsize)
        len = dstsize;
    ft_memcpy(dst, src, len);
    dst[len] = '\0';
	return (len);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char src[] = "12345";
	char dst[] = "00000";
	printf("source: %s\n", src);
	ft_strlcpy(dst, src, 4);
	printf("ft_strlcpy: %s\n", dst);
    strlcpy(dst, src, 4);
	printf("   strlcpy: %s\n", dst);
}