#include<iostream>
using namespace std;

int main() 
{	
	long long int a = 0;
$a:
	cin >> a;

	if (a)
		cout << a << endl;
	else
		return 0;
		


	goto $a;
}