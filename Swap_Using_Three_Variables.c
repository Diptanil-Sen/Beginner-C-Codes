#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the two variables \n");
    scanf("%d %d", &a, &b);

    c=a;
    a=b;
    b=c;
    printf("The Swapped Values are: %d %d\n", a,b);
    return 0;
}
