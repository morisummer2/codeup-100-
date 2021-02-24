#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b, c;
	int count = 0;
	scanf("%d %d %d", &a, &b, &c);

	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			for (int k = 0; k < c; k++, count++)
				printf("%d %d %d\r\n", i, j, k);

	printf("%d\r\n", count);
}


/*#include<iostream>			<- 이거 시간초과뜸 ㅇㅇ
using namespace std;

int main()
{
	int a, b, c;
	int count = 0;
	cin >> a >> b >> c;

	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			for (int k = 0; k < c; k++,count++)
				cout << i << ' ' << j << ' ' << k << ' ' << endl;

	cout << count << endl;
}*/