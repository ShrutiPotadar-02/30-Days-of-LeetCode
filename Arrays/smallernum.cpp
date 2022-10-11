#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin >> n;

	int a[10];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int b[10];
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[j] < a[i])
			{
				count++;
			}
			b[i] = count;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << b[i] << " " ;
	}

	return 0;

}