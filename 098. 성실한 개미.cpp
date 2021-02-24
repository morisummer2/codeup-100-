#include<iostream>
using namespace std;

int main() 
{

	int arr[10][10] = { 0, };

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			cin >> arr[i][j];

	int x, y;
	x = y = 1;
	while (1) 
	{
		if (arr[y][x] == 2)
		{
			arr[y][x] = 9;
			break;
		}
		else if (arr[y][x + 1] == 2)//¿À¸¥ÂÊ
		{
			arr[y][x] = 9;
			x++;
			arr[y][x] = 9;
			break;
			
		}
		else if (arr[y][x + 1] == 0)//¿À¸¥ÂÊ ¸ÔÀÌ
		{
			arr[y][x] = 9;
			x++;
		}
		else if (arr[y + 1][x] == 2)//¾Æ·¡
		{
			arr[y][x] = 9;
			y++;
			arr[y][x] = 9;
			break;


		}
		else if (arr[y + 1][x] == 0)//¿ŞÂÊ ¸ÔÀÌ
		{
			
			arr[y][x] = 9;
			y++;
		}
		else 
		{
			arr[y][x] = 9;
			break;
		}
		
	}

	for (int i = 0; i < 10; i++) {
		
		for (int j = 0; j < 10; j++) 
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;

}