#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter minutes: ");
    scanf("%d",&a);
    b = a/60;
    printf(" %d minutes = %d hours\n",a,b);
}