#include<iostream>
using namespace std;

int main() 
{

	int** arr = nullptr;

	int h, w, n, l, d, x, y;

	cin >> h>>w;//���� ũ��
	

	arr = new int* [h];
	for (int i = 0; i < h; i++)
		arr[i] = new int[w];

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++) 
		{
			arr[i][j] = 0;
		}
	}


	cin >> n;	//������� ����

	for (int loop = 0; loop < n; loop++)
	{

		cin >> l >> d >> y >> x;	//����, ����, ��ǥ(x,y)

		if (d == 0)
		{
			for (int i = 0; i < l && x+i-1<w;i++)
			{
				if (arr[y-1][x + i-1] == 0)
					arr[y-1][x + i-1] = 1;
				else
					arr[y-1][x + i-1] = 0;
			}
		}
		else 
		{
			for (int i = 0; i < l && y+i-1<h;i++) 
			{
				if (arr[y+i-1][x-1] == 0)
					arr[y+i-1][x-1] = 1;
				else
					arr[y+i-1][x-1] = 0;

			}
		}

	}


	for (int i = 0; i < h; i++) // ��ºκ�
	{
		for (int j = 0; j < w; j++) 
		{

			cout<<arr[i][j]<<' ';

		}
		cout << endl;
	}

}