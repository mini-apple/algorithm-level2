#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int K;
	cin >> K;
	stack<int> S;
	while (K--) {
		int t;
		cin >> t;
		if (t==0) {
			S.pop();
		}
		else {
			S.push(t);
		}
	}

	int sum=0;
	while (!S.empty()) {
		sum += S.top();
		S.pop();
	}
	cout << sum;
}