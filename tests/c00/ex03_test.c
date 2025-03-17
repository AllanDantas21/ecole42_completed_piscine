#include <stdio.h>
#include "../../c00/ex03/ft_print_numbers.c"

int main(void)
{
    printf("Testing ft_print_numbers:\n");
    printf("Numbers: ");
    fflush(stdout);
    ft_print_numbers();
    printf("\n");
    
    return (0);
}
