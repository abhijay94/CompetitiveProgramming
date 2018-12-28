#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	string s;
	cin >> n >> s;

	vector<char> v;

	double size =  (-1 + sqrt(1 + 8*n))/2;

	for (int i = 0; i < n; i++)	{
		int j = (i*(i+1)/2);
		v.push_back(s[j]);
	}

	for (int i = 0; i < v.size(); ++i)	{
		cout<<v[i];
	}


	return 0;
}