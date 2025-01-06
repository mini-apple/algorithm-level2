#include <bits/stdc++.h>
using namespace std;

int func3(int N) {
	for (int i = 0; i*i <= N; i++) {
		if (i*i == N) return 1;
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int N;
	cin >> N;

	int ans = func3(N);

	cout << ans;
}