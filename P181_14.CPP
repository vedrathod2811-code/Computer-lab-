#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter celsius: ");
    scanf("%d",&a);
b = (a*9/5)+32;
printf("%D celsius = %d fahrenheit\n",a,b);
}