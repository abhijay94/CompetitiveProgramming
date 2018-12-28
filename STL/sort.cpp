#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int a[] = {56, 21, 45, 22, 11, 9};
	int n = sizeof(a) / sizeof(int);

	sort(a, a + n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
