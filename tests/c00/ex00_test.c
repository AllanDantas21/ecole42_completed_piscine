#include <stdio.h>
#include "../../c00/ex00/ft_putchar.c"

int main(void)
{
    printf("Testing ft_putchar:\n");
    
    printf("Printing 'A': ");
    fflush(stdout);
    ft_putchar('A');
    
    printf("\nPrinting 'Z': ");
    fflush(stdout);
    ft_putchar('Z');
    
    printf("\nPrinting '0': ");
    fflush(stdout);
    ft_putchar('0');
    
    printf("\nPrinting '9': ");
    fflush(stdout);
    ft_putchar('9');
    
    printf("\n");
    
    return (0);
}
