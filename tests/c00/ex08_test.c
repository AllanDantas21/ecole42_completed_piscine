#include <stdio.h>
#include "../../c00/ex08/ft_print_combn.c"

int main(void)
{
    printf("Testing ft_print_combn:\n");
    
    printf("n = 1:\n");
    ft_print_combn(1);
    
    printf("\n\nn = 2:\n");
    ft_print_combn(2);
    
    printf("\n\nn = 3:\n");
    ft_print_combn(3);
    
    printf("\n\nn = 9:\n");
    ft_print_combn(9);
    
    printf("\n\nInvalid inputs:\n");
    printf("n = 0: ");
    ft_print_combn(0);
    printf("\nn = 10: ");
    ft_print_combn(10);
    printf("\n");
    
    return (0);
}
