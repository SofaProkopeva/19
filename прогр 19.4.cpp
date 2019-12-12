﻿#include <iostream>
using namespace std;

int main()
{
	int n, i, j, t, m, k;
	cin >> n >> m;
	int** a = new int* [n];
	for (i = 0; i < n; i++)
	{
		a[i] = new int[m];
		for (j = 0; j < m; j++)
		{
			cout << "a[" << i + 1 << "][" << j + 1 << "]=";
			cin >> a[i][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (k = i; k < n; k++)
		{
			if (a[i][0] > a[k][0])
			{
				for (j = 0; j < m; j++)
				{
					t = a[i][j];
					a[i][j] = a[k][j];
					a[k][j] = t;
				}
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}