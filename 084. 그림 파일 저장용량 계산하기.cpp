#include<iostream>
using namespace std;

int main() 
{


	long long int h, w, b, mul;
	float s;

	cin >> h >> w >> b;
	mul = h * w * b;
	s = mul / 8;
	
	printf("%.2f MB", ((s / 1024) / 1024));
	

}