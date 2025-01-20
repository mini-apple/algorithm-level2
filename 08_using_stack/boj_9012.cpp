#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;

		stack<char> stk;

		for (char c: s) {
			if (!stk.empty() && stk.top()=='(' && c==')') stk.pop(); 
			else stk.push(c);
		}
		if (!stk.empty()) cout << "NO\n";
		else cout << "YES\n";
	}
}