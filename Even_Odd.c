#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number: \n");
    scanf("%d", &a);

    if(a%2==0)
    printf("%d is an Even Value \n", a);
    else
    printf("%d is an Odd Value \n", a);
    return 0;
}
