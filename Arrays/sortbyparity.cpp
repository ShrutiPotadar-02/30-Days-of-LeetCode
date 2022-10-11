#include<bits/stdc++.h>
using namespace std;

int sortbyparity(int n, int a[])
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			int temp = a[i];
			a[i] = a[count];
			a[count] = temp;
			count++;
		}

	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	// cout << endl;
	// return 0;
}

int main() {
	int n;
	cin >> n;

	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}


	cout << sortbyparity(n, a) << endl;


	return 0;
}