#include<stdio.h>
#include<conio.h>
int prime(int);
int main()
{
    int n,p;
    int uno, zero;
    uno=1;
    zero=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    p=prime(n);
    if(p==1){
        printf("%d is prime\n", n);
        printf("%i",uno);
    }
    else
        printf("%d is not prime\n",n);
        printf("%i",zero);
    getch();
    return 0;
    }
    int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return;
    }
