#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    int b;
    printf("enter the A value");
    scanf("%d",&a);
    printf("enter the B value");
    scanf("%d",&b);

    if(a%b==1)
    {
        printf("Even number");
    }

    else
    {
        printf("odd number");
    }
    return 0;
}

    