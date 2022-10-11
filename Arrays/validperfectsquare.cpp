#include<bits/stdc++.h>
using namespace std;

bool square(int n)
{
	int result = false;
	for (int i = 1; i  < n; i++)
	{
		if (i * i == n)
		{
			result = true;

		}
	}
	return result;
}

int main()
{

	int n;
	cin >> n;

	if (square(n))
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	return 0;
}