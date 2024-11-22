#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	vector<int> a;
	int input;
	for (int i = 0; i < 7; i++) {
		cin >> input;
		if (input%2==1) a.push_back(input);
	}

	if (a.size() == 0) {
		cout << -1;
	} 
	else {
		cout << accumulate(a.begin(), a.end(), 0) << '\n';
		cout << *min_element(a.begin(), a.end());
	}
}