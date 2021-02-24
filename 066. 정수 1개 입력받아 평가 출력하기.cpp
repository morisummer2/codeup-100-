#include<iostream>
using namespace std;

int main() 
{

	int score;
	cin >> score;

	if (90 <= score)
		cout << "A" << endl;
	else if (70 <= score)
		cout << "B" << endl;
	else if (40 <= score)
		cout << "C" << endl;
	else
		cout << "D" << endl;
	
}