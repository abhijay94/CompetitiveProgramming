#include <bits/stdc++.h>
using namespace std;

//The n & (n-1) method for finding number of set bits - most efficient
int setBitsCount(int a) {
	int count = 0;
	while (a > 0) {
		count++;
		a = a & (a - 1);
	}
	return count;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;

	cin >> t;

	while (t--) {
		int a, b;
		cin >> a >> b;
		int sum = 0;
		for (int i = a; i <= b; ++i)	{
			sum += setBitsCount(i);
		}
		cout << sum << endl;
	}

	return 0;
}