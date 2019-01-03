#include <bits/stdc++.h>
using namespace std;

char keypad[][10] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

void printKeypadString(char *in, char *out, int i, int j) {
	//Base case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	//Rec case
	int digit = in[i] - '0';

	for (int k = 0; keypad[digit][k] != '\0'; k++) {
		out[j] = keypad[digit][k];
		printKeypadString(in, out, i + 1, j + 1);
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

	char out[100];

	printKeypadString(in, out, 0, 0);

	return 0;
}