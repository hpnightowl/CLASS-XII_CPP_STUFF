#include"iostream"

int fab(int n)
		{
			//base Case
			if(n==1) return 2;
			if(n==2) return 3;
				
			//Recursive Assumption
			int r1= fab(n-1);
			int r2= fab(n-2);

			//SelfWork
			return r1+r2;
		}
int main()
		{
			std::cout<<fab(5);
			return 0;
		}