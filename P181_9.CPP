#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter Rupees; ");
    scanf("%d",&a);
    b = a/48;
    printf("%d rupees = %d Dollars\n",a,b);
}