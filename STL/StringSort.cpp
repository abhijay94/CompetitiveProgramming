#include <bits/stdc++.h>
using namespace std;

bool stringCompare(string a, string b) {
	int n1 = a.length();
	int n2 = b.length();

	if (n1 > n2 && a.find(b) != string::npos) {
		return true;
	} else if (n1 < n2 && b.find(a) != string::npos) {
		return false;
	} else {
		return a < b;
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
	string arr[1000];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n, stringCompare);

	for (int i = 0; i < n; i++)	{
		cout << arr[i] << endl;
	}


	return 0;
}