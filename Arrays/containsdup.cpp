#include<bits/stdc++.h>
using namespace std;

bool duplicats(int n, int a[])
{
	int flag = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				flag = true;

			}
		}
	}
	return flag;

}

int main() {
	int n;
	cin >> n;

	int a[10];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	if (duplicats(n, a))
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	return 0;
}