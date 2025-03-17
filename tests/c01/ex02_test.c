#include <stdio.h>
#include "../../c01/ex02/ft_swap.c"

int main(void)
{
    printf("Testing ft_swap:\n");
    
    int a = 10;
    int b = 20;
    
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    ft_swap(&a, &b);
    
    printf("After swap: a = %d, b = %d\n", a, b);
    
    return (0);
}
