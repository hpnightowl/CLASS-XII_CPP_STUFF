
#include"iostream"
void mazepath(int n,int m,int cr,int cc)
		{
			if (cr ==n-1 && cc == m-1)	return 1;
			if (cr >= n or cc>=m)
					{
						return 0;
					}
			int rightans =mazepath(n,m,cr,cr+1);
			int downtans = mazepath(n,m,cr+1,cc);
			return rightans + downtans;
			}

int main()
		{
			mazepath(3,4,0,0);
			return 0;
		}
