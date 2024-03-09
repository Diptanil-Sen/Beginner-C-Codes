#include<stdio.h>
int main()
{
    int a,b;
    char n;
    printf("Enter the operation \n");
    scanf("%c", &n);
    printf("Enter two numbers \n");
    scanf("%d %d", &a, &b);
    switch(n)
    {
        case'+':printf("Sum of two numbers: %d", a+b);
        break;
        case'_':printf("Sum of two numbers: %d", a-b);
        break;
        case'*':printf("Sum of two numbers: %d", a*b);
        break;
        case'/':printf("Sum of two numbers: %d", a/b);
        break;
        case'%':printf("Sum of two numbers: %d", a%b);
        break;
        return 0;
    }
}