#include <stdio.h>
#include "../../c01/ex00/ft_ft.c"

int main(void)
{
    printf("Testing ft_ft:\n");
    
    int num = 0;
    printf("Initial value: %d\n", num);
    
    ft_ft(&num);
    printf("After ft_ft: %d\n", num);
    
    return (0);
}
