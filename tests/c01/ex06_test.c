#include <stdio.h>
#include "../../c01/ex06/ft_strlen.c"

int main(void)
{
    printf("Testing ft_strlen:\n");
    
    char *str1 = "Hello World!";
    char *str2 = "42";
    char *str3 = "";
    
    printf("String: \"%s\", Length: %d\n", str1, ft_strlen(str1));
    printf("String: \"%s\", Length: %d\n", str2, ft_strlen(str2));
    printf("String: \"%s\", Length: %d\n", str3, ft_strlen(str3));
    
    return (0);
}
