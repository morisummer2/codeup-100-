#include<iostream>
using namespace std;

int main() 
{

	int i;
	int n;
	int s[24]={ 0, };
	
	cin >> i;

	while (i--) 
	{
		cin >> n;
		s[n]++;
	}
	
	for (int i = 1; i < 24; i++)
		cout << s[i] << ' ';

}