#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int y, b, r;

	cin >> y >> b >> r;

	if (((y + 1) <= b) && ((y + 2) <= r)) {
		cout << 3 * y + 3;
	} else if (((b - 1) <= y) && ((b + 1) <= r)) {
		cout << 3 * b;
	} else {
		cout << 3 * r - 3;
	}

	return 0;
}