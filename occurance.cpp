#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
	int n; // number of elements
	cin >> n;
	int a[n],counter[n],new_array[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		counter[i]=0;
	}
	for (int i = 0; i < n; ++i)
	{
		int box = a[i];
		for (int j = 0; j < n; ++j)
		{
			if (box == a[j])
			{
				if(counter[i] < 1)
				{
					new_array[i] = box;
					counter[i]+=1;
				}
				else
					counter[i]+=1;
			}
		}
	}
	cout <<"\nElements\n";

	for (int i = 0; i < n; ++i)
	{
		cout <<a[i] << " " ;
	}
	cout<<"\n";
	for (int i = 0; i < 2*n; ++i)
	{
		cout<<"=";
	}
	cout<<"\nOccurances\n";
	for (int i = 0; i < n; ++i)
	{
		cout << counter[i] << " " ;
	}
		
	return 0;
}