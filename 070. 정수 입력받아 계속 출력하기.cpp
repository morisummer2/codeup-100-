#include<iostream>
using namespace std;

int main() 
{
	int loop = 0;
	int a;
	cin >> loop;
	int i = 0;
$go:
	
	if (i++ >= loop)
		return 0;

	cin >> a;
	cout << a << endl;

goto $go;


}