#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	while (true) {
		string s;
		getline(cin, s);

		if (s == ".") break;

		stack<char> stk;

		for (char c: s) {
			if (c == '(' || c == '[') {
				stk.push(c);
			} 
			else if (c == ')') {
				if (!stk.empty() && stk.top() == '(') stk.pop();
				else {
					cout << "no\n";
					break;
				}
			}
			else if (c == ']') {
				if (!stk.empty() && stk.top() == '[') stk.pop();
				else {
					cout << "no\n";
					break;
				}
			}
			else if (c == '.') {
				if (stk.empty()) {
					cout << "yes\n";
				}
				else {
					cout << "no\n";
				}
			}
		}
	}

}