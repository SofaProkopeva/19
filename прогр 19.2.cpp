﻿#include <iostream>
using namespace std;

int main()
{
	int n, i, j, max, min, t, m, maxi, maxj, mini, minj;
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
		max = -1;
		min = 1000000;
		for (j = 0; j < m; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				maxi = i;
				maxj = j;
			}
			if (a[i][j] < min)
			{
				min = a[i][j];
				mini = i;
				minj = j;
			}
		}

	}
	for (i = 0; i < n; i++)
	{
		t = a[i][maxj];
		a[i][maxj] = a[i][minj];
		a[i][minj] = t;
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