#include<bits/stdc++.h>
using namespace std;

int singlenum(int n, int a[])
{

	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans = ans ^ a[i];

	}

	return ans;
}


int main() {

	int n;
	cin >> n;

	int a[10];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}


	cout << singlenum(n, a) << endl;
	return 0;

}