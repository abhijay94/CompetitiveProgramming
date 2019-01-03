#include <bits/stdc++.h>
using namespace std;

string spellings[10]  = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void print(int n) {
	if (n == 0) {
		return;
	}
	//first recurce to go to first digit
	print(n / 10);

	//then print the digit by using %
	cout << spellings[n % 10] << " ";

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	print(n);

	return 0;
}