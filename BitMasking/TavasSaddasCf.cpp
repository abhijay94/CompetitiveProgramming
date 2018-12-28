#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char a[20];
	ll ans = 0;

	cin >> a;

	int len = strlen(a);

	ans = (1 << len) - 2;

	for (int i = len - 1, pos = 0; i >= 0; i--, pos++)	{
		if (a[i] == '7') {
			ans += (1 << pos);
		}
	}

	cout << ans + 1 << endl;


	return 0;
}