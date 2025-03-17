#include <stdio.h>
#include "../../c00/ex07/ft_putnbr.c"

int main(void)
{
    printf("Testing ft_putnbr:\n");
    
    printf("Input: 42, Output: ");
    ft_putnbr(42);
    
    printf("\nInput: 0, Output: ");
    ft_putnbr(0);
    
    printf("\nInput: -42, Output: ");
    ft_putnbr(-42);
    
    printf("\nInput: 2147483647 (INT_MAX), Output: ");
    ft_putnbr(2147483647);
    
    printf("\nInput: -2147483648 (INT_MIN), Output: ");
    ft_putnbr(-2147483648);
    
    printf("\n");
    
    return (0);
}
