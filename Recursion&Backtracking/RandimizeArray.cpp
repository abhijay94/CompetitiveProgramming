#include <bits/stdc++.h>
using namespace std;

void shuffle(int *a, int s, int e) {
	srand(time(NULL));

	int i, j;

	for (int i = e; i > 0; i--)	{
		j = rand() % (i + 1);
		swap(a[i], a[j]);
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//srand(time(NULL));

	int a[] = {1, 2, 3, 4 , 5 , 6};
	shuffle(a, 0, 5);

	for (int i = 0; i < 6; ++i)	{
		cout << a[i] << " ";
	}

	return 0;
}