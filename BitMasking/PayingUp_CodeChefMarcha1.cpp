#include <bits/stdc++.h>
using namespace std;

int printSeq(int a[], int no, int mugger) {
	int index = 0;
	int sum = 0;
	while (no > 0) {
		if (no & 1) {
			sum += a[index];
		}
		index++;
		no = no >> 1;
	}
	if (mugger == sum) {
		return 1;
	}
	return 0;
}

int generateSequence(int a[], int l, int mugger) {
	int r = 0;
	int range = (1 << l) - 1;

	for (int i = 1; i <= range; i++) {

		r = printSeq(a, i, mugger);
		if (r == 1) {
			break;
		}

	}
	if (r == 0) {
		return 0;
	}
	return 1;

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	int n, m;
	int ans[t] = {0};
	for (int i = 0; i < t; i++) {
		cin >> n >> m;

		int notes[n] = {0};

		for (int j = 0; j < n; j++) {

			cin >> notes[j];
		}

		ans[i] = generateSequence(notes, n, m);

	}
	for (int i = 0; i < t; i++)	{
		if (ans[i]) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}

	return 0;

}
