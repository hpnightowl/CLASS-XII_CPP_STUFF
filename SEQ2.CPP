#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
class bank {	int ac; char na[20]; float bal;
	       public :
		 void acc()
		 { cout<<"Enter A/C No. please "; cin>>ac;
		   cout<<"Enter your name ";gets(na);
		   cout<<"Enter your balance ";cin>>bal;
		 }
		 void pr()
		 {  cout<<ac<<"\t"<<na<<"\t"<<bal<<endl;
		 }
		 int ret()
		 { return ac ; }
	    };
void main()
{ bank o;  fstream f ; char ch ;int n,p ;
  // to create a binary daat file in sequential mode
  do
  { clrscr();
    gotoxy(30,2);cout<<"MAIN MENU";
    gotoxy(30,3);cout<<"*********";
    gotoxy(10,5);cout<<"1. Creation of a data file ";
    gotoxy(10,7);cout<<"2. Reading a particular record ";
    gotoxy(10,9);cout<<"3. Reading of a data file ";
    gotoxy(10,11);cout<<"4. Exit the program";
    gotoxy(20,15);cout<<"Enter your choice please  ";
    cin>>n;
    switch(n)
    {  case 1 : f.open("bank.dat", ios :: out);  // out is a cration mode
		do
		{  o.acc();   // RAM
		   f.write((char*)&o, sizeof(o));   // S M
		   cout<<"\Any more records please (y/n) ";cin>>ch;
		 }while(ch != 'n');
		 f.close();
		 break;
       case 2 : f.open("bank.dat", ios :: in);  // in is a reading mode
		cout<<"Enter A/C no. you want to display ";cin>>p;
		f.read((char*)&o, sizeof(o));  // S M   to  RAM
		while( ! f.eof())
		{  int x = o.ret();
		   if( x == p)
		   {  o.pr();
		      getchar();
		      break;
		   }

		   f.read((char*)&o, sizeof(o));
		 }
		 f.close();
		 break;
       case 3 : f.open("bank.dat", ios :: in);  // in is a reading mode
		f.read((char*)&o, sizeof(o));  // S M   to  RAM
		while( ! f.eof())
		{  o.pr();   // RAM
		   f.read((char*)&o, sizeof(o));
		 }
		 f.close();
		 break;
       case 4 :  exit(0);
    }
    gotoxy(20,20);cout<<"Any more option please (y/n) "; cin>>ch;
  }while(ch!= 'n');
  getchar();
}






