#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[10000];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0) {
      swap(arr[i], arr[n - i]);
    }
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }


  return 0;
}