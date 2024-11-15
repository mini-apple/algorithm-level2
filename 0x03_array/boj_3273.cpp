#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n, x, count=0;
	vector<int> input(n), check(2000001, 0);

	cin >> n;
	int t;
	for (int i = 0; i < n; i++) {
		cin >> t;
		input.push_back(t);
	}
	cin >> x;

	for (auto i: input) {
		// check여부 나중에 확인
		if (x-i>0 && check[x-i]) count++;
		check[i]++;
	}
	
	cout << count;
}