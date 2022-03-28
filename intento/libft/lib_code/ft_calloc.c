#include <stddef.h>

/* void    *ft_calloc(size_t count, size_t size) // 1st number of block. 2nd size of block
{

} */
#include <stdio.h>
 int main() {
    int i, * ptr, sum = 0;
    ptr = calloc(10, sizeof(int));
    if (ptr == NULL) {
        printf("Error! memory not allocated.");
    exit(0);
    }
        printf("Building and calculating the sequence sum of the first 10 terms \ n ");
        for (i = 0; i < 10; ++i) { * (ptr + i) = i;
            sum += * (ptr + i);
        }
        printf("Sum = %d", sum);
        free(ptr);
        return 0;
    }