#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int N, a[201]={}, v;
	cin >> N;
	
	while (N--) {
		int t;
		cin >> t;
		a[t+100]++;
	}

	cin >> v;
	cout << a[100+v];

}