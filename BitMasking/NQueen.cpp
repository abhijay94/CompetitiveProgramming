#include <bits/stdc++.h>
using namespace std;

bitset<30> col, d1, d2;

void solve(int r, int n, int &ans) {
	//base case when all queen are placed i.e. all rows iterated
	if (r == n) {
		ans++;
		return;
	}
	// start with column zero, c=column
	for (int c = 0; c < n; ++c)	{
		//if no queen is present in column and 2 diagonals
		if (!col[c] && !d1[r - c + n] && !d2[r + c]) {
			//placing a queen in the square
			col[c] = d1[r - c + n] = d2[r + c] = 1;
			//recurse for next row
			solve(r + 1, n, ans);
			//backtrack - remove queen from the square if control reaches here
			//otherwise the method just returns from base case
			col[c] = d1[r - c + n] = d2[r + c] = 0;
		}

	}
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

	int ans = 0;

	solve(0, n, ans);

	cout << ans << endl;

	return 0;
}