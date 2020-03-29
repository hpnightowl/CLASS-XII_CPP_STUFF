#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
    int max = INT_MIN; // small negative number int 
    int second_max = INT_MIN;

    for( int i = 0; i < n; i++ ) {
        if( a[i] > max ) {
            second_max = max;
            max = a[i];
        }
        else if( a[i] > second_max ) {
            second_max = a[i];
        }
    }

    cout << "Second Max: " << second_max ;

	return 0;
}