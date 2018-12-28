#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> v1;
	vector<int> v2;

	v1.reserve(n);
	v2.reserve(n);

	//input first vector
	for (int i = 0; i < n; ++i)	{
		int temp;
		cin >> temp;
		v1.push_back(temp);
	}

	//input second vector
	for (int i = 0; i < n; ++i)	{
		int temp;
		cin >> temp;
		v2.push_back(temp);
	}

	vector<int> arr;
	arr.reserve(2 * n);
	arr.insert(arr.end(), v1.begin(), v1.end());
	arr.insert(arr.end(), v2.begin(), v2.end());

	sort(arr.begin(), arr.end());

	cout << arr[n-1];

	return 0;
}