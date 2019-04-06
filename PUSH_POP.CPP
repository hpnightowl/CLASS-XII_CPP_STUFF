#include"iostream.h"
#include"conio.h"
#include"process.h"
#include"stdio.h"
void push();void pop();void show();
struct hp {int n;char na[20];hp *xt; };
hp *top,*ptr,*save;
void main()
	{
	 clrscr();int ch;char n;top=NULL;
	 do
	   {
	    clrscr();
	    gotoxy(32,5);cout<<"MAIN MENU";
	    gotoxy(32,6);cout<<"=========";
	    gotoxy(25,8);cout<<"ENTER DATA";
	    gotoxy(25,10);cout<<"SHOW DATA";
	    gotoxy(25,12);cout<<"DELETE DATA";
	    gotoxy(25,14);cout<<"PLEASE ENTER YOUR CHOICE";
	    cin>>ch;
	    switch(ch)
		{
		case 1:push();break;
		case 2:show();break;
		case 3:pop();break;
		case 4:exit(0);break;
		}
	    gotoxy(25,14);cout<<"ANYMORE CHOICE PLEASE";
	    cin>>n;
	   }while(n!='n');
	 getch();
	}
void push()
	 {
	  clrscr();
	  ptr=new hp;
	  gotoxy(25,8);cout<<"ENTER NUMBER";cin>>ptr->n;
	  gotoxy(25,10);cout<<"SHOW NAME";gets(ptr->na);
	  ptr->xt=NULL;
	  if(top==NULL)
	  top=ptr;
	  else
	  {
	  save=top;top=ptr;ptr->xt=save;
	  }
	 }

void pop()
	 {
	  clrscr();
	  hp *no;
	  if(top==NULL)
	  cout<<"KUCH NAHI HAI";
	  else
	  {
	   no=top;
	   cout<<no->n<<"\t"<<no->na<<"\n";
	   top=top->xt;
	   delete no;
	  }
	 }
void show()
	 {
	  clrscr();
	  hp *lo;
	  if(top==NULL)
	  cout<<"KUCH NAHI HAI";
	  else
	  {
	   lo=top;
	   while(lo!=NULL)
	   {
	   cout<<lo->n<<"\t"<<lo->na<<"\n";
	   lo=lo->xt;
	   }
	  }
	 }



