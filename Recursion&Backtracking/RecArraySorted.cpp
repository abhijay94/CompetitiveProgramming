#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *a, int n) {
	if (n == 1) {
		return true;
	}

	if (a[0] < a[1] && isSorted(a + 1, n - 1)) {
		return true;
	}

	return false;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[] = {1, 2 , 5, 7, 9};

	cout << isSorted(arr, 5);


	return 0;
}