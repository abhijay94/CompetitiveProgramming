#include <bits/stdc++.h>
using namespace std;

long long calculateRocketDist(long long x, long long y) {
	return x * x + y * y;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	priority_queue<long long> q;

	int n, k;

	cin >> n >> k;

	while (n--) {
		int qType;
		cin >> qType;

		if (qType == 1) {
			long long x, y;
			cin >> x >> y;
			q.push(calculateRocketDist(x, y));
			if(q.size() > k) {
				q.pop();
			}
		} else {
			cout << q.top() << endl;
		}
	}

	return 0;
}