#include<iostream>
using namespace std;

int main() 
{

	int a, b, c;

	cin >> a >> b >> c;

	((a <= b) && (a <= c)) ? printf("%d", a) : ((b <= a) && (b <= c)) ? printf("%d", b) : ((c <= a) && (c <= b)) ? printf("%d", c) : 1;

}