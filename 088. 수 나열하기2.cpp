#include<iostream>
using namespace std;

int main() 
{

	int a, r, n;
	int c = 0;
	cin >> a >> r >> n;

	for (long long int i = a; n != c; i *= r)
	{
		if (n == ++c)
			cout << i << endl;
	}

}