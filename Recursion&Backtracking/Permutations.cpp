#include <bits/stdc++.h>
using namespace std;

//Example of backtracking in recursion
void permute(char *in, int i) {
	//Base case
	if (in[i] == '\0') {
		cout << in << " ";
		return;
	}

	//Recursive case
	for (int j = i; in[j] != '\0'; j++) {
		swap(in[i], in[j]);
		permute(in, i + 1);

		//Backtracking - to restore original array before the next call
		swap(in[i], in[j]);
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char in[100];
	cin >> in;

	permute(in, 0);

	return 0;
}