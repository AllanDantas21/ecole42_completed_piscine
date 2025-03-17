#include <stdio.h>
#include "../../c01/ex01/ft_ultimate_ft.c"

int main(void)
{
    printf("Testing ft_ultimate_ft:\n");
    
    int num = 0;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7;
    int *********ptr9 = &ptr8;
    
    printf("Initial value: %d\n", num);
    
    ft_ultimate_ft(ptr9);
    printf("After ft_ultimate_ft: %d\n", num);
    
    return (0);
}
