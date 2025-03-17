#include <stdio.h>
#include "../../c01/ex03/ft_div_mod.c"

int main(void)
{
    printf("Testing ft_div_mod:\n");
    
    int a = 42;
    int b = 5;
    int div = 0;
    int mod = 0;
    
    printf("Input: a = %d, b = %d\n", a, b);
    
    ft_div_mod(a, b, &div, &mod);
    
    printf("Output: div = %d, mod = %d\n", div, mod);
    
    a = 10;
    b = 3;
    
    printf("\nInput: a = %d, b = %d\n", a, b);
    
    ft_div_mod(a, b, &div, &mod);
    
    printf("Output: div = %d, mod = %d\n", div, mod);
    
    return (0);
}
