#include <bits/stdc++.h>
using namespace std;

int func2(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			if (arr[i] + arr[j] == 100) return 1;
		}
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n;
	cin >> n;
	int arr[101] = {0, };
	
	for (int i = 0; i < n; i++) {
		int inp;
		cin >> inp;
		arr[i] = inp;
	}

	int ans = func2(arr, n);
	cout << ans;
}