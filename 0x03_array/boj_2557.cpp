#include <bits/stdc++.h>
using namespace std;

int freq[10];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int a, b, c;
	cin >> a >> b >> c;
	string mult = to_string(a * b * c);

	for (char c: mult) {
		for (int i = 0; i < 10; i++ ) {
			if ((c-'0') == i) {
				freq[i] += 1;
				break;
			}
		}
	}

	for (int i: freq) {
		cout << i << '\n';
	}
}