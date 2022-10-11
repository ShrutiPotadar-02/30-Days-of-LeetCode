#include<bits/stdc++.h>
using namespace std;

bool search(int n, int m , int a[][1000], int target)
{


	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == target)
			{
				return true;
			}
		}
	}
	return false;
}

int main() {
	int m, n;
	cin >> m >> n;



	int a[100][1000];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}

	int target;
	cin >> target;

	if (search(n, m, a, target))
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	return 0;


}