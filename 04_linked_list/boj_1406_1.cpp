#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	string s;
	cin >> s;

	list<char> lst;
	for(char c: s) {
		lst.push_back(c);
	}
	auto cursor = lst.end();

	int m;
	cin >> m;

	while (m--) {
		string cmd;
		cin >> cmd;

		if (cmd == "L") {
			if (cursor != lst.begin()) cursor--;
		} else if (cmd=="D") {
			if (cursor != lst.end()) cursor++;
		} else if (cmd=="B") {
			if (cursor != lst.begin()) {
				cursor--;
				cursor = lst.erase(cursor);
			}
		} else if (cmd=="P") {
			char c;
			cin >> c;
			lst.insert(cursor, c);
		}
	}

	for (char c: lst) {
		cout << c;
	}
}