#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;

	cin >> n >> m;

	string rooms[n];

	int l[n], r[n]; // stores posn of last room from left and right in ith row

	for (int i = 0; i < n; ++i)	{
		cin >> rooms[i];
	}

	//precompute last room in ith row from left and right
	for (int i = n - 1; i >= 0; ++i)	{
		for (int j = 0; j < m + 2; ++j)		{
			if (rooms[i][j] == '1') {
				l[i] = max(j, l[i]);
			}
			if (rooms[i][m + 1 - j] == '1') {
				r[i] = max(r[i], j);
			}

		}
		if (l[i])
			tmp = i
	}

	n=tmp+1;

	



	return 0;
}