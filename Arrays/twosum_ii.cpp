#include<bits/stdc++.h>
using namespace std;


int main()
{

	int n;
	cin >> n;

	int a[100];
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	int target;
	cin >> target;

	int i = 1;
	int j = n ;

	while (i < j)
	{
		int sum = a[i] + a[j];
		if (sum == target)
		{
			cout << i << " " << j << endl;
			i++;
			j--;
		}
		else if (sum < target)
		{
			i++;
		}
		else
		{
			j--;
		}
	}
	return 0;

}