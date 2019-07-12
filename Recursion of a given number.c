#include<stdio.h>
//prototype
void print (int n);
int main(){
    int n;
    //input
    printf("Enter an integer value n: ");
    scanf("%d", &n);
    print(n);
    printf("\n");
    return 0;
}
void print(int n){
    if (n<1)
        printf("Base case ");
    else{
        printf("%d ", n);
        print(n-1);
        printf("%d ", n);
    }
}
