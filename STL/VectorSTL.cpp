#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<int> v;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)	{
		cout << v[i] << " ";
	}

	cout << endl << "max size = " << v.max_size() << endl;
	cout << "capacity = " << v.capacity() << endl;

	return 0;
}