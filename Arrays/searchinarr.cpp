#include<bits/stdc++.h>
using namespace std;

int searchinarr(int n, int a[], int target)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == target)
		{
			return i;
		}
	}
	return -1;
}


int main() {

	int n;
	cin >> n;

	int a[10];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int target;
	cin >> target;

	cout << searchinarr(n, a, target) << endl;

	return 0;
}