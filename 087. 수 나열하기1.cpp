#include<iostream>
using namespace std;

int main() 
{
	int a, d, n;
	int c=0;
	cin >> a >> d >> n;

	for (int i = a;c!=n;i += d) 
	{
		if (++c == n)
			cout << i;
	}
}