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

	int ans[10];
	for (int i = 0; i < n; i++)
	{
		// for (int j = 0; j < n; j++)
		// {
		ans[i] = a[i] * a[i];
		// cout << ans[i] << " ";
		// }
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (ans[j] > ans[j + 1])
			{
				int temp = ans[j];
				ans[j] = ans[j + 1];
				ans[j + 1] = temp;
			}
		}

	}
	for (int i = 0; i < n; i++)
	{
		cout << ans[i] << " ";

	}
	cout << endl;
	// ans++;
	return 0;

}