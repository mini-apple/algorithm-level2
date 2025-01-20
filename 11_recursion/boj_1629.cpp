#include <bits/stdc++.h>
using namespace std;

long long mod_exp(long long a, long long b, long long m) {
	if (b==1) {
		return a % m;
	}
	long long val = mod_exp(a, b/2, m);
	val = val * val % m;
	if (b % 2 == 0) return val;
	return val * a % m;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	long long a, b, c;
	cin >> a >> b >> c;

	cout << mod_exp(a, b, c);
}