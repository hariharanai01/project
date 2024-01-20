#include<stdio.h>
int main()
{
    int d;
    int a;
    int b;
    int c;
    int e;
    int f;
    printf("Enter how many value:");
    scanf("%d",&d);
    if (d==2)
    {
        printf("Enter the value A:");
        scanf("%d",&a);
        printf("Enter the value B:");
        scanf("%d",&b);
        printf("Enter the operator :");
        scanf("%d",&e);
        switch(e)
        {
            case 1:
            f=a+b;
            printf("the added value of A and B is:%d",f);
            break;
             case 2:
            f=a-b;
            printf("the subtracted value of A and B is:%d",f);
            break;
            case 3:
            f=a*b;
            printf("the multiplied value of A and B is:%d",f);
            break;
        }
    }
    else
    {
        printf("Enter the value A:");
        scanf("%d",&a);
        printf("Enter the value B:");
        scanf("%d",&b);
        printf("Enter the value C:");
        scanf("%d",&c);
        printf("Enter the operator :");
        scanf("%d",&e);
        switch(e)
        {
            case 1:
            f=a+b+c;
            printf("the added value of A and B is:%d",f);
            break;
             case 2:
            f=a-b-c;
            printf("the subtracted value of A and B is:%d",f);
            break;
            case 3:
            f=a*b*c;
            printf("the multiplied value of A and B is:%d",f);
            break;
    
        }

    }
    return 0;
    }