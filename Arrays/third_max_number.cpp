#include<bits/stdc++.h>
using namespace std;

int thirdmax(int n, int a[])
{
	if (n == 2)
	{
		int m = a[0];
		for (int i = 0; i < n; i++)
		{
			if (a[i] > m)
			{
				m = a[i];
			}

		}
		return m;
	}


	int firstm = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > firstm)
		{
			firstm = a[i];
		}
	}

	int secondm = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > secondm && a[i] < firstm)
		{
			secondm = a[i];
		}
	}

	int thirdm = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > thirdm && a[i] < secondm)

		{
			thirdm = a[i];
		}

	}

	return thirdm;
}


int main() {

	int n;
	cin >> n;

	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}


	for (int i = 0; i < n - 1 ; i++)
	{
		for (int j = 0; j < n - i - 1 ; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}

		}

	}


	cout << thirdmax(n, a) << endl;

	return 0;
}