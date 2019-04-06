#include"iostream.h"
#include"conio.h"
#include"stdio.h"
#include"dos.h"
void maths()
	{
	 clrscr();
	 cout<<"-> ADDITION";
	 char n[30];int i=0,sumb=0;
	 while(n[i]=='=')
	 {
	 gets(n[i]);
	 if(n[i]=='=') break;
	 else
	 sumb+=n[i];
	 }



	 getch();
	}

void main()
	 {
	  clrscr();
	  char name[20];int m;
	  cout<<"-> WHAT IS YOUR NAME? ";
	  gets(name);
	  clrscr();
	  delay(900);
	  cout<<"-> HI!,"<<name;
	  delay(900);
	  cout<<"\n-> HOW CAN I HELP?";
	  delay(900);
	  cout<<"-> I CAN HELP YOU IN THREE WAYS";
	  delay(900);
	  cout<<"-> 1.MATHS";
	  cin>>m;
	  switch(m)
		{
		 case 1: maths();
		 default: cout<<"HARSH PAL";
		}
	  getch();
	 }
