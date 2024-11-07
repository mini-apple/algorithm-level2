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


}