#include<iostream>
using namespace std;

int main() 
{

	char a;
	cin >> a;
	a -= 55;

	for (int i = 1; i < 16; i++)
		printf("%X*%X=%X\r\n", a, i, a * i);
		

}