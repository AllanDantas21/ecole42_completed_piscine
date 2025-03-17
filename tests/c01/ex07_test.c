#include <stdio.h>
#include "../../c01/ex07/ft_rev_int_tab.c"

void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");
}

int main(void)
{
    printf("Testing ft_rev_int_tab:\n");
    
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = 5;
    
    printf("Before: ");
    print_array(arr1, size1);
    
    ft_rev_int_tab(arr1, size1);
    
    printf("After: ");
    print_array(arr1, size1);
    
    int arr2[] = {10, 20, 30, 40};
    int size2 = 4;
    
    printf("\nBefore: ");
    print_array(arr2, size2);
    
    ft_rev_int_tab(arr2, size2);
    
    printf("After: ");
    print_array(arr2, size2);
    
    int arr3[] = {42};
    int size3 = 1;
    
    printf("\nBefore: ");
    print_array(arr3, size3);
    
    ft_rev_int_tab(arr3, size3);
    
    printf("After: ");
    print_array(arr3, size3);
    
    return (0);
}
