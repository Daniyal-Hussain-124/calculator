#include <stdio.h>
int main(void)
{
    char option ;
    printf("Choose the arithmetic operator (+, -, *, /,%) :");
    scanf("%c", &option);

    int a, b ;

    switch (option)
    {
    case ('+'):{
        printf("Enter the numbers to be added: \n");
        scanf("%d\n%d", &a, &b);
        int c = a + b ;
        printf("The sum is: %d", c);
        break;
    }
     case ('-'):{
        printf("Enter the number to be subtracted: \n");
        scanf("%d\n%d",&a,&b);
        int c= a-b;
        printf("The difference is %d \n",c);
        }
        case ('*'):{
        printf("Enter the number to be multiplied: \n");
        scanf("%d\n%d",&a,&b);
		int c= a*b;
		printf("The multiplication answer is %d \n",c);    
        }   
    default:
        break;
    }
}
