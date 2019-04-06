#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<dos.h>
void main()
{  char ch;   clrscr();
   ofstream fout("a.dat");  // Parameterized constr4uctor way
   void fun();
   cout<<"Enter a sentence \n";
   do
   {  //ch = getch();  // RAM   characters can not be seen
	//  OR
      ch = getche();   // RAM  characters can be seen
      fout<<ch;      // to S M
   }while(ch !='.');
   fout.close();
   fun();   // Calling of a function
   getchar();
}
// To convert first letter of each word into capital
void fun()
{   // Reading program
   char ch;
   ifstream fin("a.dat");
   fin>>ch;    // S M  to  RAM
   ch = toupper(ch);
   cout<<ch;delay(400);
   fin.get(ch);    // S M  to  RAM
   while(! fin.eof())
   {  if( isspace(ch) )
      {  cout<<ch;delay(400);
	 fin.get(ch);    // S M  to  RAM
	 ch = toupper(ch);
	 cout<<ch;delay(400);
      }
      else
      {   cout<<ch;
	    delay(400);
      }
    fin.get(ch);    // S M  to  RAM
   }
   fin.close();
   getchar();
}

