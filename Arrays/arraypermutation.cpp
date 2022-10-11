#include<bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	cin >> n;

	int nums[100];
	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	int ans[100];
	for (int i = 0; i < n; i++)
	{
		ans[i] = nums[nums[i]];


	}
	for (int i = 0; i < n; i++)
	{
		cout << ans[i] << " ";
	}

	return 0;
}