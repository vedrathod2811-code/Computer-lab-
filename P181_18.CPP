#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter sides of rectangle: ");
    scanf("%d%d",&a,&b);
    c = a*b;
    d = 2*(a+b);
    printf("area of rectangle = %d\n",c);
    printf("perimeter of rectangle = %d\n",d);
}