#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int N;
	cin >> N;

	while (N--) {
		string inp;
		cin >> inp;

		list<char> L;
		auto cursor = L.end();

		for (char c: inp) {
			if (c == '<') {
				if (cursor != L.begin()) cursor--;
			}
			else if (c == '>') {
				if (cursor != L.end()) cursor++;
			}
			else if (c == '-') {
				if (cursor != L.begin()) {
					cursor--;
					cursor = L.erase(cursor);
				}
			}
			else {
				L.insert(cursor, c);
			}
		}

		// 출력
		for (auto c: L) {
			cout << c;
		}
		cout << '\n';
	}
}