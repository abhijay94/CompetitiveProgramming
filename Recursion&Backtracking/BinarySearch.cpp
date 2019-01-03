#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int beg, int end , int x) {
	int mid = beg + (end - beg) / 2;
	if (end >= beg) {
		if (arr[mid] == x) {
			return mid;
		}

		if (x < arr[mid]) {
			return binarySearch(arr, beg, mid - 1, x);
		} else {
			return binarySearch(arr, mid + 1, end, x);
		}
	}
	return -1;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[] = {2, 5, 7, 13, 19, 28};

	cout<< binarySearch(arr, 0, 5, 99);

	return 0;
}