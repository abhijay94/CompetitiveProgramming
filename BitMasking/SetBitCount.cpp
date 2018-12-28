#include <iostream>
using namespace std;

//The & 1 method for finding number of set bits
// Less efficient than n & (n-1) method
void setBitsCount(int a) {
    int count = 0;
    while(a > 0) {
        if((a & 1) == 1) {
            count++;
        }
        a = a >> 1;
    }
    cout << count<<endl;
}

int main() {
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
