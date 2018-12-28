#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int myInts[] = { 10, 20, 30, 30, 20, 10, 10, 20 };

	vector<int> v(myInts, myInts + 8);

	sort(v.begin(), v.end());

	vector<int>::iterator low, up;
	low = lower_bound(v.begin(), v.end(), 20);
	up = upper_bound(v.begin(), v.end(), 20);

	cout << "lower bound at position " << low - v.begin() << endl;
	cout << "upper bound at position " << up - v.begin() << endl;

	return 0;

}