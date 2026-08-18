#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter your marks in maths,science,english: ");
    scanf("%d%d%d",&a,&b,&c);
    d =(a+b+c)/3;
e=a+b+c;
printf("Average of three subject = %d\n",d);
printf("Total of the three subject =%d\n",e);
}