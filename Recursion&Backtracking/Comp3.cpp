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

	int rot[n];

	int sum;

	for (int i = 0; i < n; ++i)	{
		cin >> rot[i];
		sum += rot[i];
	}

	if((sum % 360) == 0) {
		cout << "YES";
	} else{
		sort(rot, rot + n);

		int halfSum1, halfSum2, pos;
		for (int i = 0; i < n - 1; ++i)	{
			halfSum1 += rot[i];
			if(halfSum1 >= (sum/2)) {
				pos = i;
				break;
			}
		}

		for (int i = pos; i < n; ++i)	{
			halfSum2 += rot[i];
		}

		if (halfSum1 == halfSum2)

	}

	return 0;
}