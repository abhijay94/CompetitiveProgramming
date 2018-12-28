#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> q;

	for (int i = 0; i < 5; ++i) {
		q.push(i);
	}

	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}

	return 0;
}