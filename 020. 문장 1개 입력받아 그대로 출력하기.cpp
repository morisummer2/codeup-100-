#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	char str[2000] = { 0, };

	fgets(str, 2000, stdin);
	cout << str << endl;
}