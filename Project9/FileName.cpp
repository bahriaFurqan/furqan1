#include<iostream>
using namespace std;

int main()
{
	double temp, celsius;

	for (int i = 1; i <= 5; i++)
	{
		cout << i << " - ";
		cin >> temp;
		cout << endl;
		
	}
	for(int i = 1; i <= 5; i++)
	{
		celsius = (temp - 32) * 5.0 / 9.0;
		cout << celsius << endl;
	}
	return 0;
}