#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n;
	cin >> n;

	while (n--) {
		string L;
		cin >> L;

		list<char> lst;
		auto cursor = lst.end();
		for (char c: L) {
			if (c == '<') {
				if (cursor != lst.begin()) cursor--;
			}
			else if (c == '>') {
				if (cursor != lst.end()) cursor++;
			}
			else if (c == '-') {
				if (cursor != lst.begin()) {
					cursor--;
					cursor = lst.erase(cursor);
				}
			}
			else {
				lst.insert(cursor, c);
			}
		}
		
		for (char c: lst) {
			cout << c;
		}
		cout << '\n';
	}
}