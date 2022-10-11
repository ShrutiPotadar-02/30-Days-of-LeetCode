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

	// for (int i = 0; i < n - 1; i++)
	// {
	// 	for (int j = 0; j < n - i - 1; j++)
	// 	{
	// 		if (a[j] > a[j + 1])
	// 		{
	// 			int temp = a[j];
	// 			a[j] = a[j + 1];
	// 			a[j + 1] = temp;
	// 		}
	// 	}
	// }

	int low = 0;
	int mid = 0;
	int high = n - 1;

	while (mid <= high)
	{
		if (a[mid] == 0)
		{
			int temp = a[low];
			a[low] = a[mid];
			a[mid] = temp;
			low++;
			mid++;

		}

		else if (a[mid] == 1)
		{
			mid++;

		}
		else (a[mid] == 2)
		{
			int temp = a[mid];
			a[mid] = a[high];
			a[high] = temp;
			high--;
		}


	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;

}