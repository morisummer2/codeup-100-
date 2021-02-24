#include<iostream>
using namespace std;

int main() 
{

	int arr[24] = { 0, };
	
	int n;
	
	int i;
	
	cin >> n;
	int temp = 23;

	while (n--) 
	{
		cin >> i;
		arr[i]++;

		if (temp > i)
			temp = i;
	}
	cout << temp << endl;
	
	
}