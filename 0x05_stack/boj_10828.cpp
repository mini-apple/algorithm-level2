#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int N, a;
	cin >> N;
	
	stack<int> S;
	string op;
	while (N--) {
		cin >> op;
		if (op=="push") {
			cin >> a;
			S.push(a);
		}
		else if (op=="pop") {
			if (!S.empty()) { 
				cout << S.top() << '\n';
				S.pop();
			}
			else cout << -1 << '\n';
		}
		else if (op=="size") {
			cout << S.size() << '\n';
		}
		else if (op=="empty") {
			cout << (int)S.empty() << '\n';
		}
		else if (op=="top") {
			if (!S.empty()) cout << S.top() << '\n';
			else cout << -1 << '\n';
		}
	}
}