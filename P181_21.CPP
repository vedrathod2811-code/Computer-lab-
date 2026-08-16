#include <stdio.h>
int main()
{ 
    int a,b;
    printf("Enter your gross salary: ");
    scanf("%d",&a);
    b = a+(a)/10-(a)*3/100;
    printf("Net salary =%d",b);
}