#include <bits/stdc++.h>
using namespace std;

int power(int a, int b) {
	//base case
	if (b == 0) {
		return 1;
	}

	/*recursive case -  b is odd or b is even
	if even a^b = (a^b/2)^2
	if odd a^b = a(a^b/2)^2*/
	int result = power(a, b / 2);

	// square the result
	result *= result;

	//if odd mulyiply by a
	if (result & 1) {
		result *= a;
	}

	return result;

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;

	cout << power(a, b);

	return 0;
}