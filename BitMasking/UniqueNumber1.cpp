#include <bits/stdc++.h>
using namespace std;

void findUnique1(int *a, int n) {
	//XOR all the elements of array
	int res;

	for (int i = 0; i < n; ++i)	{
		res = res ^ a[i];
	}

	//Find rightmost set bit in res
	int temp = res;
	int i = 0;

	while (temp > 0) {
		if (temp & 1) {
			break;
		}
		i++;
		temp = temp >> 1;
	}

	//Create mask for ith set bit
	int mask = (1 << i);

	int firstNo = 0;

	//XOR all numbers that have ith bit set using the mask
	//The final result will give the first number
	for (int i = 0; i < n; ++i)	{
		if ((mask & a[i]) != 0) {
			firstNo = firstNo ^ a[i];
		}
	}

	cout << firstNo << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; ++i)	{
		cin >> arr[i];
	}

	findUnique1(arr, n);

	return 0;
}