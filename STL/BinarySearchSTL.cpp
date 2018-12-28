#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool myComparator(int a, int b) {
	return a < b;
}

int main() {
	int myints[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
	vector<int> v(myints, myints + 9);

	sort(v.begin(), v.end());

	if (binary_search(v.begin(), v.end(), 3)) {
		cout << "Element found!" << endl;
	} else {
		cout << "Element Not found!" << endl;
	}

	sort(v.begin(), v.end(), myComparator);

	if (binary_search(v.begin(), v.end(), 2, myComparator)) {
		cout << "found";
	} else {
		cout << "not found";
	}

	return 0;
}