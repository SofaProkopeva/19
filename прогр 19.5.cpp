#include <iostream>
using namespace std;

int main()
{
	int n, sum;
	cin >> n;
	int** a = new int* [n];
	for (int i = 1; i < n + 1; i++)
	{
		a[i] = new int[n];
		for (int j = 1; j < n + 1; j++)
		{
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
	}
	for (int i = 1; i < n; i++)
	{
		sum = 0;
		for (int j = 1; j <= i; j++)
		{
			sum = sum + a[j][n - i + j];
		}
		cout << sum << endl;
	}
	for (int i = n; i >= 1; i--)
	{
		sum = 0;
		for (int j = 1; j <= i; j++)
		{
			sum = sum + a[n - i + j][j];
		}
		cout << sum << endl;
	}
	return 0;
}
