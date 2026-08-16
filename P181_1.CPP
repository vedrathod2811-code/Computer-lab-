#include <stdio.h> //headerfile
#include <conio.h> //another header file.
void main() //function
{/*Program to add 2 nos. */
int a,b,c;
clrscr();
printf("Enter 2 Nos.:");
scanf("%d%d",&a,&b); //input
c = a + b; // add 2 nos
printf("%d + %d = %d\n",a,b,c);
getch();
}