#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int N, x;
	cin >> N;

	string op;
	deque<int> DQ;
	while (N--) {
		cin >> op;
		if (op=="push_front") {
			cin >> x;
			DQ.push_front(x);
		}
		else if (op=="push_back") {
			cin >> x;
			DQ.push_back(x);
		}
		else if (op=="pop_front") {
			if (!DQ.empty()) {
				cout << DQ.front() << '\n';
				DQ.pop_front();
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (op=="pop_back") {
			if (!DQ.empty()) {
				cout << DQ.back() << '\n';
				DQ.pop_back();
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (op=="size") {
			cout << DQ.size() << '\n';
		}
		else if (op=="empty") {
			cout << DQ.empty() << '\n';
		}
		else if (op=="front") {
			if (!DQ.empty()) {
				cout << DQ.front() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (op=="back") {
			if (!DQ.empty()) {
				cout << DQ.back() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
	}
}