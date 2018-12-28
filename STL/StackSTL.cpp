#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main() {
	stack<string> st;

	st.push("Apple");
	st.push("Mango");
	st.push("Guava");

	while(!st.empty()) {
		cout<<st.top()<<endl;
		st.pop();
	}

	return 0;
}