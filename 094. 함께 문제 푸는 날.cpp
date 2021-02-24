#include<iostream>
using namespace std;


int main() 
{
	int a, b, c;

	cin >> a >> b >> c;
	int i = 2;
	for (i = 2; i % a || i % b  || i % c; i++)
		;
	
	cout << i << endl;
}