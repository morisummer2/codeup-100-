#include<iostream>
using namespace std;

int main() 
{

	long long int n1, n2, n3;

	cin >> n1 >> n2 >> n3;

	cout << n1 + n2 + n3 << endl;

	printf("%.1f", (static_cast<float>(n1) + static_cast<float>(n2) + static_cast<float>(n3)) / 3 );

	
}