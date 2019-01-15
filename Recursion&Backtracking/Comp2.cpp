#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string table;
	cin >> table;

	char hand[5][2];
	for (int i = 0; i < 5; ++i)	{
		for (int j = 0; j < 2; ++i) {
			cin >> hand[i][j];
		}
	}

	bool canPlay = false;

	for (int i = 0; i < 5; ++i)	{
		if (hand[i][0] == table[0] || hand[i][1] == table[1]){
			canPlay = true;
			break;
		}
	}

	if (canPlay) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	

	return 0;
}