#include<stdio.h>
#include<conio.h>
void main()
{
char x;
clrscr();
printf("enter the charracter");
scanf("%c",&x);
if((x>='a' && x<='z')||(x>='A'&& x<='Z'))
printf("\n the charracter is alphabet");
else
printf("\nthe charracter is not alphabet");
getch();
}
