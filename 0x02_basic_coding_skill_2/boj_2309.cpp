#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	vector<int> a;
	int inp, sum;
	for (int i = 0; i < 9; i++) {
		cin >> inp;
		a.push_back(inp);
	}
	sort(a.begin(), a.end());
	sum = accumulate(a.begin(), a.end(), 0);


	for (int i = 0; i < 8; i++) {
		int total = 0;
		for (int j = i+1; j < 9; j++) {
			int p1 = a[i];
			int p2 = a[j];
			int sub = p1 + p2;
			total = sum - sub;
			if (total == 100) {
				a.erase(find(a.begin(), a.end(), p1));
				a.erase(find(a.begin(), a.end(), p2));

				for (int i: a) cout << i << '\n';
				return 0;
			}
		}
	}
}