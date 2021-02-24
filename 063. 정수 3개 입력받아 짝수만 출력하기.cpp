#include<iostream>
using namespace std;

int main() 
{

	int a[3] = { 0, };

	cin >> a[0] >> a[1] >> a[2];
	
	for (int i = 0; i < 3; i++)
		if (a[i] % 2 == 0)
			cout << a[i]<<endl;

}