#include <stddef.h>
void *ft_memset(void *s, int c, size_t n){
    unsigned char *result = (unsigned char *)s;
    size_t i = 0;
    while(i != n){
        result[i] = (unsigned char)c;
        i++;
    }
    return result;
}