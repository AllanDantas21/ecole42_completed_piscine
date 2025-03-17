#include <stdio.h>
#include "../../c01/ex05/ft_putstr.c"

int main(void)
{
    printf("Testing ft_putstr:\n");
    
    printf("String 1: ");
    fflush(stdout);
    ft_putstr("Hello World!");
    
    printf("\nString 2: ");
    fflush(stdout);
    ft_putstr("42 is awesome!");
    
    printf("\nString 3: ");
    fflush(stdout);
    ft_putstr("");
    
    printf("\n");
    
    return (0);
}
