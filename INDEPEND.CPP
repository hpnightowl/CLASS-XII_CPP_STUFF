#include"iostream.h"
#include"conio.h"
#include"dos.h"
#include"graphics.h"
#include"stdio.h"
#include"process.h"

void main()
	 {
	 clrscr();
	 for(int i=25;i<=50;i++)
	 {
	  textcolor(2);
	  gotoxy(i,9);
	  delay(10);
	  cprintf("лл");
	  gotoxy(i,10);
	  delay(10);
	  cprintf("лл");

	   textcolor(7);
	  gotoxy(75-i,7);
	  delay(10);
	  cprintf("лл");
	   textcolor(7);
	  gotoxy(75-i,8);
	  delay(10);
	  cprintf("лл");

	  textcolor(LIGHTRED);
	  gotoxy(i,5);
	  delay(10);
	  cprintf("лл");
	  textcolor(LIGHTRED);
	  gotoxy(i,6);
	  delay(10);
	  cprintf("лл");

	 }

	 textcolor(2+BLINK);
	 gotoxy(27,15);
	 cprintf("HAPPY INDEPENEDENCE DAY");
	 textcolor(7);
	 gotoxy(60,25);
	 cprintf("CREATED BY HARSH PAL");
	 getch();


	 }






