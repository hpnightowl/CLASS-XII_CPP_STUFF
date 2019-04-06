#include"iostream.h"
#include"conio.h"
#include"string.h"

struct aym1 { int rn1;char na1[20];int m1;};
aym1 o1[3]={ {1,"HARSH",50},
	     {2,"HIM",40},
	     {3,"RAMESH",90}
	   };
class aym { int rn;char na[20];float m;char res[20];
	    public:
	    void acc(int);
	    void print(int);
	  };
void aym :: acc(int x)
	   {
	    rn=o1[x].rn1;
	    strcpy(na,o1[x].na1);
	    m=o1[x].m1;
	   if(m>80)
		strcpy(res,"1D");
		else if(m<=80 && m>60)
			strcpy(res,"2D");
		else if(m<=60 && m>40)
			strcpy(res,"3D");
		else strcpy(res,"FAIL");

	   }
void aym :: print(int r)
	   {
	    gotoxy(15,r+1);cout<<rn;
	    gotoxy(30,r+1);cout<<na;
	    gotoxy(45,r+1);cout<<m;
	    gotoxy(60,r);cout<<res;

	   }
void main()
	{
	 aym o[3];
	 clrscr();
	 for(int i=0;i<=2;i++)
	 {
	 o[i].acc(i);
	 o[i].print(i);
	 }
	 getch();
	}



