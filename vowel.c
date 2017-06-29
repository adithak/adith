#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("enter the gigit");
scanf("%c",&a);
if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
printf("the digit is vowel");
else
printf("the digit is consonant");
getch();
}
