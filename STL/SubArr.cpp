#include <bits/stdc++.h>
using namespace std;

// Returns sum of lengths of all subarrays with distinct
// elements.
int sumoflength(int arr[], int n) {
	// For maintaining distinct elements.
	unordered_set<int> s;

	// Initialize ending point and result
	int j = 0, ans = 0;

	// Fix starting point
	for (int i = 0; i < n; i++)	{
		// Find ending point for current subarray with
		// distinct elements.
		while (j < n && s.find(arr[j]) == s.end()) {
			s.insert(arr[j]);
			j++;
		}

		// Calculating and adding all possible length
		// subarrays in arr[i..j]
		ans += ((j - i) * (j - i + 1)) / 2;

		// Remove arr[i] as we pick new stating point
		// from next
		s.erase(arr[i]);
	}

	return ans;
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

	cout << sumoflength(arr, n);

	return 0;
}