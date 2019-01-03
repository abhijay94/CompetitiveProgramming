#include <bits/stdc++.h>
using namespace std;

void subsequences(char *in, char *out, int i, int j) {
	//Base case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << " ";
		return;
	}

	//Rec case
	//1. Include the current char
	out[j] = in[i];
	subsequences(in, out, i + 1, j + 1);

	//2. Exclude the current char
	subsequences(in, out, i + 1, j);

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

	char out[100];

	subsequences(in, out, 0, 0);

	return 0;
}