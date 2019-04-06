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
// To print the word and no. of characters in it .
void fun()
{   // Reading program
   int c =0;char ch;
   ifstream fin("a.dat");
   fin>>ch;    // S M  to  RAM
   while(! fin.eof())
   {  if( isspace(ch) || ch == '.')
      {  cout<<"\t = "<<c<<"\n";
	 c = 0 ;
      }
      else
      {  cout<<ch;delay(500);
	 c++;
      }
      //if( ch == '.')
      //	cout<<"\t = "<<c<<"\n";
      fin.get(ch);    // S M  to  RAM
   }
   fin.close();
   getchar();
}

