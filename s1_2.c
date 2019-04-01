#include<stdio.h>
#include<conio.h>
void main()
{
int i,l;
char a[30];
clrscr();
gets(a);
l=strlen(a);
for(i=l-1;i>=0;i--)
{
printf("%d",a[i]);
}
getch();
}
