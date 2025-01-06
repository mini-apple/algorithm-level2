#include <bits/stdc++.h>
using namespace std;

int func1(int N) {
	int ret = 0;
	for (int i = 1; i <= N; i++) {
		if (i%3==0 || i%5==0) ret += i;
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n;
	cin >> n;

	int sum = func1(n);

	cout << sum;
}