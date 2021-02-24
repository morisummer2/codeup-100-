#include<iostream>
using namespace std;

int main() 
{

	int a;
	int i = 0;
	cin >> a;
	
	while (a>0)
		a -= ++i;

	cout << i << endl;


}