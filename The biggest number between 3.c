
#include <stdio.h>

void main()
{
    int num1, num2, num3;

    //We introduce the values
    printf("Enter the 3 integer numbers\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("\n\n%d is the biggest number\n\n", num1);
        }
        else
        {
            printf("\n\n%d is the biggest number\n\n", num3);
        }
    }
    else if (num2 > num3)
        printf("\n\n%d is the biggest number\n\n", num2);
    else
        printf("\n\n%d is the biggest number\n\n", num3);
}
