#include"iostream.h"
#include"conio.h"
void main()
	 {
	 clrscr();
	 int r;
	 float h=0.1;
	 for(float i=0;i<=0.6;i=i+h)
	 {
	 gotoxy(24+10*(1-i),6+10*i);
	 cprintf(".");
	 gotoxy(30+10*i,6+10*(1-i));
	 cprintf(".");
	 }
	 getch();
	 }
