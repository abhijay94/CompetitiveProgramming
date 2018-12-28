#include <bits/stdc++.h>
using namespace std;

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
		string num1, num2;
		cin >> num1;
		cin >> num2;

		int size = num1.size();

		vector<bool> b1, b2;

		for (int i = 0; i < size; ++i) {
			if (num1[i] == '0') {
				b1.push_back(false);
			} else {
				b1.push_back(true);
			}

			if (num2[i] == '0') {
				b2.push_back(false);
			} else {
				b2.push_back(true);
			}

		}

		for (int i = 0; i < size; ++i)	{
			int ans;
			if (b1[i] == b2[i]) {
				ans = 0;
			} else {
				ans = 1;
			}
			cout << ans;
		}

	}


	return 0;
}