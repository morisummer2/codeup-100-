#include<iostream>
using namespace std;
int main() 
{

	int a;
	cin >> a;
	int sum = 0;
	for (int i = 1; sum<a; i++) 
	{
		sum += i;
	}

	cout << sum << endl;
}