#include <stdio.h>
#include "../../c01/ex04/ft_ultimate_div_mod.c"

int main(void)
{
    printf("Testing ft_ultimate_div_mod:\n");
    
    int a = 42;
    int b = 5;
    
    printf("Before: a = %d, b = %d\n", a, b);
    
    ft_ultimate_div_mod(&a, &b);
    
    printf("After: a (div) = %d, b (mod) = %d\n", a, b);
    
    a = 10;
    b = 3;
    
    printf("\nBefore: a = %d, b = %d\n", a, b);
    
    ft_ultimate_div_mod(&a, &b);
    
    printf("After: a (div) = %d, b (mod) = %d\n", a, b);
    
    return (0);
}
