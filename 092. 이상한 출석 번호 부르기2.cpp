#include<iostream>
using namespace std;

int main()
{

	int n;
	cin >> n;

	int* call = new int[n];

	for (int i = n-1; i+1; i--)
		cin >> call[i];

	
	for (int i = 0; i < n; i++)
		cout << call[i] << ' ';

}