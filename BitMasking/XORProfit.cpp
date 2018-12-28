#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x, y;

	cin >> x >> y;

	int size = y - x;

	int res = 0;

	for (int i = x; i <= (x + size / 2); ++i)	{
		for (int j = (x + size / 2) + 1; j <= y; ++j)	{
			int temp = (i ^ j);
			if (temp > res) {
				res = temp;
			}
		}
	}

	cout << res;


	return 0;
}