#include <stdio.h>
void swap(int *x, int *y);
int main(){
    //variable definition
    int n1, n2;
    //input
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    //swap values
    swap(&n1, &n2);
    //print
    printf("The values are n1 = %d and n2 = %d n", n1, n2);
    return 0;
}
void swap(int *x, int *y){
    int aux;
    aux= *x;
    *x=*y;
    *y=aux;
}
