#include<bits/stdc++.h>
using namespace std;

int goodpair(int n, int a[])
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{

			if (a[i] == a[j])
			{
				count++;

			}

		}

	}
	return count;
}
int main() {

	int n;
	cin >> n;

	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	cout << goodpair(n, a) << endl;
	return 0;

}