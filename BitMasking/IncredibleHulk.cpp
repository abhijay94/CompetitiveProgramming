#include <iostream>
using namespace std;

void setBitsCount(int a) {
    int count = 0;
    while (a > 0) {
        count++;
        a = a & (a - 1);
    }
    cout << count << endl;
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
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        setBitsCount(arr[i]);
    }
}
