#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter your marks in maths,science,english: ");
    scanf("%d%d%d",&a,&b,&c);
    d =(a+b+c)/3;
printf("Average of three subject = %d",d);
}