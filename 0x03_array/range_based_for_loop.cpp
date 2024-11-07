#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	vector<int> v1 = {1, 2, 3, 4, 5, 6};

	// 1. range-based for loop (since c++11)
	for (int e : v1)
		cout << e << ' ';

	// 2. not bad
	for (int i = 0; i < v1.size(); i++) 
		cout << v1[i] << ' ';

	// 3. ***WRONG***
	for (int i = 0; i <= v1.size()-1; i++)
		cout << v1[i] << ' ';
}