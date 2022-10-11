#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin >> n;

	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int b[100];
	for (int i = 0; i < n; i++)
	{
		b[i] = a[i];
	}

	for (int i = 0; i < n - 1 ; i++)
	{
		for (int j = 0; j < n - i - 1 ; j++)
		{
			if (b[j] > b[j + 1])
			{
				int temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}

		}

	}


	int count = 0;
	for (int i = 0; i < n; i++)
	{

		if (a[i] != b[i])
		{
			count++;
		}

	}

	cout << count << endl;

	return 0;
}
