#include<stdio.h>
int main()
{
    int l,b;
    double r;
    printf("Enter the length and breadth of the rectangle \n");
    scanf("%d %d", &l, &b);
    printf("Enter the radius of the circle \n");
    scanf("%lf", &r);

    printf("Permiter of the Rectangle: %d\n", 2*(l+b));
    printf("Area of the Rectangle: %d\n", l*b);
    printf("Circumference of the Circle: %lf\n", 2*3.14*r);
    printf("Area of the Circle: %lf\n", 3.14*3.14*r);
    return 0;
}
