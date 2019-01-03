#include <bits/stdc++.h>
using namespace std;

int fib (int n) {
	if (n == 0 || n == 1) {
		return 1;
	}

	return fib(n - 1) + fib (n - 2);
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

	cout<<fib(n);


	return 0;
}