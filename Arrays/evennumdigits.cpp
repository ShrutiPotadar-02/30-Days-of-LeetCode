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

	int count = 0;
	for (int i = 0; i < n; i++)
	{
		int numofdigit = 0;
		while (a[i] != 0)
		{
			numofdigit++;
			a[i] = a[i] / 10;
		}
		// cout << numofdigit << endl;

		if (numofdigit % 2 == 0)
		{
			count++;
		}

	}
	cout << count << endl;


	return 0;

}