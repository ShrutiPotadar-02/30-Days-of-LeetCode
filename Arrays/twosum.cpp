// #include<bits/stdc++.h>
// using namespace std;
// int main() {

// 	int nums[5];
// 	for (int i = 0; i < 5; i++)
// 	{
// 		cin >> nums[i];
// 	}
// 	int x;
// 	cin >> x;

// 	for (int i = 0; i < 5; i++)
// 	{
// 		if ((nums[i] + nums[i + 1]) == x)
// 		{
// 			cout << i << i + 1;
// 		}
// 	}


// 	return 0;
// }

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {

		int n = nums.size();
		int i = 0;
		int j = n - 1;

		while (i < j)
		{

			int currsum = n[i] + n[j];
			if (currsum > target)
			{
				j--;
			}
			else if (currsum < target)
			{
				i++;
			}

			else if (currsum == target)
			{
				cout << i << "," << j << endl;
				i++;
				j--;
			}
		}
	}


};
