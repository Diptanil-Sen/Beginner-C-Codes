#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && a>c)
    printf("The Maximum Value: %d\n", a);
    else if(b>c)
    printf("The Maximum Value: %d\n", b);
    else
    printf("The Maximum Value: %d\n", c);
    return 0;
}