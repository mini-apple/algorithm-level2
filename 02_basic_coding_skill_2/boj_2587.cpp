#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	vector<int> a;
	int inp;
	for (int i = 0; i < 5; i++) {
		cin >> inp;
		a.push_back(inp);
	}
	sort(a.begin(), a.end());

	int sum = accumulate(a.begin(), a.end(), 0);
	cout << sum/a.size() << '\n';
	cout << a[2];
}