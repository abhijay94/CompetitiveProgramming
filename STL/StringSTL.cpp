#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
	return a.length() < b.length();
}

int main() {
	string arr[] = {"orange", "banana", "plum", "apple", "watermelon"};

	sort(arr, arr + 5, compare);

	for (int i = 0; i < 5; ++i)	{
		cout << arr[i] << " ";
	}

	return 0;
}