#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int N, K;
	cin >> N >> K;

	list<int> a;
	for (int i = 1; i < N+1; i++) {
		a.push_back(i);
	}
	auto it = a.begin();

	cout << '<';
	while (!a.empty()) {
		// 이동
		for (int i = 0; i < K-1; i++) {
			it++;
			if (it == a.end()) {
				it = a.begin();
			}
		}
		// 출력 및 삭제
		cout << *it;
		
		it = a.erase(it);
		if (it == a.end()) it = a.begin();

		if (!a.empty()) cout << ", "; 
	}
	cout << '>';
}