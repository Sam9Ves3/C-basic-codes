#include <stdio.h>
#include <math.h>
int main()
{


    //Define variables
    float a, f=0;
    //Ask the degrees to the user
    printf("Write the degres in Celsius: \n");
    scanf("%f", &a);
    //compute the operation
    f = (a*5/9)+ 32;
    //return the value in F
    printf("The degrees in Celsius is: %.2f", f);
    return 0;
}
