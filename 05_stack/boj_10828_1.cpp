#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n;
	cin >> n;

	stack<int> stk;

	while(n--) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int d;
			cin >> d;
			stk.push(d);
		} else if (cmd == "pop") {
			if (!stk.empty()) {
				cout << stk.top() << '\n'; 
				stk.pop();
			} else {
				cout << -1 << '\n';
			}
		} else if (cmd == "size") {
			cout << stk.size() << '\n';
		} else if (cmd == "empty") {	
			if (!stk.empty()) {
				cout << 0 << '\n';
			} else {
				cout << 1 << '\n';
			}
		} else {
			if (!stk.empty()) {
				cout << stk.top() << '\n';
			} else {
				cout << -1 << '\n';
			}
		}
	}
}