#include<iostream>
using namespace std;

int main()
{
	long long int n1,n2;
	cin >> n1 >> n2;
	
	cout << n1 + n2 << endl;

	cout << n1 - n2 << endl;

	cout << n1 * n2 << endl;

	cout << n1 / n2 << endl;

	cout << n1 % n2 << endl;

	printf("%.2f", static_cast<float>(n1)/ static_cast<float>(n2));
}