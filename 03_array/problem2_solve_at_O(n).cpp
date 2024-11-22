#include <bits/stdc++.h>
using namespace std;

// solve at O(n)
int func2(int arr[], int N) {
	int occur[101] = {};
	for (int i = 0; i < N; i++) {
		if (occur[100-arr[i]]==1) return 1;
		occur[arr[i]] = 1;
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int arr1[3] = {1, 52, 48};
	int arr2[3] = {50, 42};
	int arr3[4] = {4, 13, 63, 87};

	cout << func2(arr1, 3) << '\n';
	cout << func2(arr2, 2) << '\n';
	cout << func2(arr3, 4) << '\n';
}