#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int k;
	cin >> k;

	stack<int> stk;
	while (k--) {
		int n;
		cin >> n;

		if (n!=0) {
			stk.push(n);
		} else {
			stk.pop();
		}
	}

	int sum = 0;
	while (!stk.empty()) {
		sum += stk.top();
		stk.pop();
	}
	cout << sum;
}