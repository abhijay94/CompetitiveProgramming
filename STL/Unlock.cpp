#include <bits/stdc++.h>
using namespace std;


void KswapPermutation(int arr[], int n, int k) { 
    // Auxiliary dictionary of storing the position 
    // of elements 
    int pos[n+1]; 
  
    for (int i = 0; i < n; ++i) 
        pos[arr[i]] = i; 
  
    for (int i=0; i<n && k; ++i) { 
        // If element is already i'th largest, 
        // then no need to swap 
        if (arr[i] == n-i) 
            continue; 
  
        // Find position of i'th largest value, n-i 
        int temp = pos[n-i]; 
  
        // Swap the elements position 
        pos[arr[i]] = pos[n-i]; 
        pos[n-i] = i; 
  
        // Swap the ith largest value with the 
        // current value at ith place 
        swap(arr[temp], arr[i]); 
  
        // decrement number of swaps 
        --k; 
    } 
} 

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	int arr[n];


	for (int i = 0; i < n; ++i)	{
		cin >> arr[i];
	}

	KswapPermutation(arr, n, k);

	for (int i = 0; i < n; ++i)	{
		cout << arr[i] << " ";
	}

	return 0;
}