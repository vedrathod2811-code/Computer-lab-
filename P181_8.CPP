#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter dollars; ");
    scanf("%d",&a);
    b = a*48;
    printf("%d dollars = ₹%d\n",a,b);
}