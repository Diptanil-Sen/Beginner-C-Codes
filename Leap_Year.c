#include<stdio.h>
int main()
{
    int l;
    printf("Enter the year \n");
    scanf("%d", &l);

    if(l%400==0)
    printf("%d is a leap year\n", l);
    else if(l%100==0)
    printf("%d is not a leap year\n", l);
    else if(l%4==0)
    printf("%d is a leap year\n", l);
    else
    printf("%d is not a leap year\n", l);
    return 0;
}
