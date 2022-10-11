#include<bits/stdc++.h>
using namespace std;

int findgcd(int n, int a[], int max, int min)
{
	int rem;
	while (min != max)
	{
		rem = min % max;
		min = max;
		max = rem;
	}
	int gcd = min;
	return gcd;
}

int main() {

	int n;
	cin >> n;

	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int max = INT_MIN;;
	int min = INT_MAX;
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
		else if (a[i] > max)
		{
			max = a[i];
		}
	}
	cout << findgcd(n, a, max, min) << endl;
	return 0;
}