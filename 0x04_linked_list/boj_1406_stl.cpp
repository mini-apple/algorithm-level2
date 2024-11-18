#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	string init;
	cin >> init;
	list<char> L;
	for (auto c: init) L.push_back(c);
	// 커서 위치: 마지막 + 1
	auto cursor = L.end();
	
	int M;
	cin >> M;

	while (M--) {
		char op;
		cin >> op;

		if (op == 'P') {
			char add;
			cin >> add;
			L.insert(cursor, add);
		}
		else if (op == 'L') {
			if (cursor != L.begin()) cursor--;
		}
		else if (op == 'D') {
			if (cursor != L.end()) cursor++;
		}
		else { // 'B'
			if (cursor != L.begin()) {
				cursor--;
				cursor = L.erase(cursor);
			}
		}
	}
	for (auto c: L) cout << c;
}