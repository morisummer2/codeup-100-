#include<iostream>
using namespace std;

int main() 
{

	long long int  h, b, c, s,mul;
	double dev;

	cin >> h >> b >> c >> s;
	mul = h * b * c * s;

	dev = mul / 8;	//Byte

	printf("%.1f MB", ((dev / 1024) / 1024));



}