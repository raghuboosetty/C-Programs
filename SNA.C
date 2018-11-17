#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
int a[4]={1,2,3,4};
int *note(int x,int y,int f)
{ //int a[4]={1,2,3,4};
if(f==0)
{
 return a;
}
else return 0;
}
void erase()
{ static int *p,i;
if(*(p+3)!=72||*(p+3)!=75||*(p+3)!=77||*(p+3)!=80)

p=note(0,0,0);
for(i=0;i<4;i++)
printf("%u -> %d\n",p+i,*(p+i));
}
void main()
{
clrscr();
erase();
getch();
}