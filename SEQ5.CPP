#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<process.h>
class bank { private :
		int ac; char na[20]; float bal;
	     public :
		int acc();
		int show(int);
		int ret()
		{ return ac; }
	    };
bank :: acc()
{ cout<<"Enter A/C No. ";cin>>ac;
  cout<<"enter your name ";gets(na);
  cout<<"Enter opening balance ";cin>>bal;
  return 0;
}
bank :: show(int row)
{ gotoxy(20,row);cout<<ac;
  gotoxy(40,row);cout<<na;
  gotoxy(60,row);cout<<bal;
  return 0;
}
void main()
{ bank o; fstream f,g; char ch,ch1; int n,r=10, acno;
  do
  {  clrscr();
     cout<<"\n 1. Creation of data file\n";
     cout<<"\n 2. Reading of data file\n";
     cout<<"\n 3. Deletion of a reacord\n";
     cout<<"\n 4. Exit the program \n";
     cout<<"\n\n enter your choice please ";cin>>n;
     switch(n)
     {  case 1 : cout<<"CREATION OF BINARY DATA FILE\n";
		 f.open("a.dat", ios :: out);
		 do
		 {  o.acc();  // in R A M
		    f.write( (char*) &o, sizeof(o));  // R A M to S M
		    cout<<"\n Ant more records please (y/n) ";cin>>ch;
		 }while(ch!='n');
		 f.close();
		 break;
	case 2 : cout<<"READING OF BINARY DATA FILE\n";
		 clrscr(); int r = 10;
		 f.open("a.dat", ios :: in);
		 f.read( (char*) &o, sizeof(o));  // S M to R A M
		 while(!f.eof())
		 {  o.show(r);   // print
		    f.read( (char*) &o, sizeof(o));  //  S M to R A M
		    r++;
		 }
		 f.close();
		 break;
	case 3 : cout<<"Deletion of the record \n";
		 cout<<"\n Enter the A/C No. please ";cin>>acno;
		 f.open("a.dat", ios :: in);   // Reading
		 g.open("b.dat", ios :: out);  // Writing
		 f.read( (char*)&o, sizeof(o));  // S M to R A M
		 while(!f.eof())
		 {  int x = o.ret();
		    if(x != acno)
			g.write((char*)&o,sizeof(o));  //  R A M  to S M

		    f.read( (char*)&o,sizeof(o));  //  S M to R A M
		 }
		 f.close();
		 g.close();
		 system("erase a.dat");
		 system("rename b.dat  a.dat");
		 break;

	 case 4 :  exit(0);
     }
     cout<<"\n Any more options please (y/n):";cin>>ch1;
  }while(ch1!='n');
}




/*

		    ALT + F   S      TO SAVE A FILE

		    ALT + C   B      TO BUILD A PRORAM

		    ALT  + F  D      TO COME TO DOS SHELL
					( SYSTEM PROMPT )

		    C:\TC\BIN\  SEQ2.EXE     TO EXECUTE

  */

































