#include<iostream>
using namespace std;

int main() 
{

	int n, index1, index2;
	int arr[20][20] = { 0, };
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> index1 >> index2;
		arr[index1][index2] = 1;
	}

	for (int i = 1; i < 20; i++) 
	{
		for (int j = 1; j < 20; j++) 
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

}