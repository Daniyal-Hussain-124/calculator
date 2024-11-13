#include <stdio.h>
int main(void)
{
    char option ;
    printf("Choose the arithmetic operator (+, -, *, /) :");
    scanf("%c", &option);

    int a, b ;

    switch (option)
    {
    case ('+'):{
        printf("Enter the numbers to be added: ");
        scanf("%d\n%d", &a, &b);
        int c = a + b ;
        printf("The sum is: %d", c);
        break;
    }
    default:
        break;
    }
}
