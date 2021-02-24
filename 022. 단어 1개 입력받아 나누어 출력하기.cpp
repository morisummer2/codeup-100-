#include<iostream>
using namespace std;

int main() 
{

	char str[1024] = { 0, };

	cin >> str;
	for (int i = 0; str[i]; i++) 
	{
		cout << '\'' << str[i] << '\''<< endl;
	}

	return 0;
}