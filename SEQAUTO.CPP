#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
#include<string.h>
#include<process.h>
/*class bank { private :
		int ac; char na[20]; float bal;
	     public :
		int acc(int);
		int show(int);
		int ret() { return ac; }
	    };
bank :: acc(int y)
{ ac = y  ;
  cout<<"Enter your name ";gets(na);
  cout<<"Enter opening balance ";cin>>bal;
  cout<<"Your A/C No. is :  ";cout<<ac;
  return 0;
}
bank :: show(int row)
{ gotoxy(20,row);cout<<ac;
  gotoxy(40,row);cout<<na;
  gotoxy(60,row);cout<<bal;
  return 0;
}
void main()
{ bank o; fstream f,g; char ch,ch1; int n,r=10,acno;
  do
  {  clrscr();
     cout<<"\n 1. Creation of data file with AUTOMATION of A/C No.\n";
     cout<<"\n 2. Reading of data file\n";
     cout<<"\n 3. Exit the program \n";
     cout<<"\n\n enter your choice please ";cin>>n;
     switch(n)
     {  case 1 : cout<<"CREATION OF BINARY DATA FILE\n";
		 f.open("c.dat", ios :: in);
		 f.read((char*)&o, sizeof(o));  // S M  to R A M
		 if(!f)
		 { cout<<"\n File does not exist \n";getchar();
		   f.close();
		   acno = 101;
		   f.open("c.dat", ios :: out);
		   o.acc(acno);  // R A M
		   f.write( (char*)&o, sizeof(o));  // R A M to S M
		   f.close();
		 }

		 else
		 { while(!f.eof())
		   {  f.read( (char*) &o, sizeof(o));  // To read a last record
		   }
		   f.close();
		   acno = o.ret();
		   acno =acno  + 1 ;
		   f.open("c.dat", ios :: app);
		   o.acc(acno);  // in R A M
		   f.write( (char*) &o, sizeof(o));  // R A M to S M
		   f.close();
		 }
		 char ch2[8];
		 itoa(acno,ch2, 10);
		 strcat(ch2,".dat");
		 cout<<"\n"<<ch2<<endl;
		 f.open(ch2,ios :: out);
		 f.close();
		 break;
	case 2 : cout<<"READING OF BINARY DATA FILE\n";
		 clrscr();
		 f.open("c.dat", ios :: in);
		 f.read( (char*) &o, sizeof(o));  // S M to R A M
		 while(!f.eof())
		 {  o.show(r);
		    f.read( (char*) &o, sizeof(o));  //  S M to R A M
		    r++;
		 }
		 f.close();
		 break;
	 case 3 :  exit(0);
     }
     cout<<"\n Any more options please (y/n):";cin>>ch1;
  }while(ch1!='n');
} */

void main()
{ clrscr(); fstream f ;
  char ch2[8];
  for(int i = 101; i<= 210; i++)
  {  itoa(i,ch2, 10);
     strcat(ch2,".dat");
     cout<<ch2<<endl;
     f.open(ch2,ios :: out);
     f.close();
     cout<<"\n Press any key to contuinue . . . "<<i<<endl;
     getchar();
  }
}



















