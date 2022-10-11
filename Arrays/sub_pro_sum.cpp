#include<bits/stdc++.h>
using namespace std;
int main() {

	int n, result = 0;
	cin >> n;

	int pro = 1;
	int sum = 0;
	while (n > 0)
	{
		int r = n % 10;
		pro = pro * r;
		sum = sum + r;
		n = n / 10;
		result = pro - sum;
	}

	cout << result << endl;
	return 0;
}