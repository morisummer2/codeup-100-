#include<iostream>
using namespace std;

int main() 
{

	int sub = 1;
	int n_input = 0;

	cin >> n_input;

	while (n_input >= sub)
		sub *= 10;

	while (sub != 1) 
	{
		sub /= 10;

		
		cout << '['<<n_input / sub * sub <<']'<< endl;

		n_input -= n_input / sub * sub;
	}

}