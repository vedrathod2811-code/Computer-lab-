#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the base and height of triangle: ");
    scanf("%d%d",&a,&b);
    c = (a*b)/2;
    printf("Area of triangle = %d",c);
}