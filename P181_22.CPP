#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter gross sales: ");
    scanf("%d",&a);
    b = a-(a)/10;
    printf("Net sales = %d",b);
}