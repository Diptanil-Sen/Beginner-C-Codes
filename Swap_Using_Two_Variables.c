#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two variables \n");
    scanf("%d %d", &a, &b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("The Swapped Values are: %d %d\n", a,b);
    return 0;
}
