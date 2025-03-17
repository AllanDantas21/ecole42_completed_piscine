#include <stdio.h>
#include "../../c00/ex04/ft_is_negative.c"

int main(void)
{
    printf("Testing ft_is_negative:\n");
    
    printf("Input: -42, Output: ");
    fflush(stdout);
    ft_is_negative(-42);
    
    printf("\nInput: 0, Output: ");
    fflush(stdout);
    ft_is_negative(0);
    
    printf("\nInput: 42, Output: ");
    fflush(stdout);
    ft_is_negative(42);
    
    printf("\n");
    
    return (0);
}
