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

void fun()
{
   // Reading program
      int c =0;char ch;
   ifstream fin("a.dat");
   cout<<"\n The sentence is = ";
   fin>>ch;    // S M  to  RAM

   while(! fin.eof())
   {  if( isspace(ch) )
	  c = c + 1;
      fin.get(ch);    // S M  to  RAM
   }
   cout<<"\n No. of words are = "<<c+1<<endl;
   fin.close();
   getchar();
}

