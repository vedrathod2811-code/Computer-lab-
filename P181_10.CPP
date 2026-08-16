#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter dollars; ");
    scanf("%d",&a);
    b = a*48/70;
    printf("%d dollars = %d pounds\n",a,b);
}