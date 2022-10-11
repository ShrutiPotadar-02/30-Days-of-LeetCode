#include<bits/stdc++.h>
using namespace std;
int main() {

	int m, n;
	cin >> m >> n;

	int a[100][100];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}

	int max = 0;
	for (int i = 0; i < m; i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			sum = sum + a[i][j];
			if (sum > max)
			{
				max = sum;
			}

		}

	}
	cout << max << endl;







	// cout << sum << endl;


	// for (int i = 0; i < m; i++)
	// {
	// 	for (int j = 0; j < n; j++)
	// 	{


	// 	}
	// }

	return 0;
}