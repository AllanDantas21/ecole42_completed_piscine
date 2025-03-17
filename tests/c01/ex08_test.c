#include <stdio.h>
#include "../../c01/ex08/ft_sort_int_tab.c"

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
    printf("Testing ft_sort_int_tab:\n");
    
    // Test with unsorted array
    int arr1[] = {5, 3, 1, 4, 2};
    int size1 = 5;
    
    printf("Before: ");
    print_array(arr1, size1);
    
    ft_sort_int_tab(arr1, size1);
    
    printf("After: ");
    print_array(arr1, size1);
    
    // Test with already sorted array
    int arr2[] = {1, 2, 3, 4, 5};
    int size2 = 5;
    
    printf("\nBefore (already sorted): ");
    print_array(arr2, size2);
    
    ft_sort_int_tab(arr2, size2);
    
    printf("After: ");
    print_array(arr2, size2);
    
    // Test with reversed array
    int arr3[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size3 = 9;
    
    printf("\nBefore (reversed): ");
    print_array(arr3, size3);
    
    ft_sort_int_tab(arr3, size3);
    
    printf("After: ");
    print_array(arr3, size3);
    
    // Test with duplicate values
    int arr4[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int size4 = 9;
    
    printf("\nBefore (with duplicates): ");
    print_array(arr4, size4);
    
    ft_sort_int_tab(arr4, size4);
    
    printf("After: ");
    print_array(arr4, size4);
    
    return (0);
}
