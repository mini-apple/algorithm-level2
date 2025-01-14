#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n, k;
	cin >> n >> k;

	list<int> lst;
	for (int i = 1; i < n+1; i++) {
		lst.push_back(i);
	}

	auto p = lst.begin();
	cout << '<';
	while (!lst.empty()) {
		for (int i = 0; i < k-1; i++) {
			p++;
			if (p == lst.end()) p = lst.begin();
		}

		cout << *p;

		p = lst.erase(p);
		if (p == lst.end()) p = lst.begin();
		
		if (!lst.empty()) cout << ", ";
	}
	cout << '>';
}