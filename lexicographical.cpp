
#include"iostream"
void lexico(int n,int start)
		{
			if(start>n)
					{
						return;
					}
			if(start ==n )
					{
						std::cout<<start<<"\n";
						return;
					}
			std::cout<<start<<"\n";
			for(int i= (start ==0)?1:0; i<=9; i++)
			{
				lexico(n,10*start+i);
			}

		}
int main()
		{
			lexico(13,0);
			return 0;
		}
