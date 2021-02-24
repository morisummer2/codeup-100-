#include<iostream>
using namespace std;

int main() 
{

	int a, m, d, n;
	int c = 0;
	cin >> a >> m >> d >> n;

	for (long long int i = a; n != c; i = i * m + d)
		if (n == ++c)
			cout << i << endl;

}