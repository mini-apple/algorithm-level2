#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int N, K, a[6][2]={};

	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		int S, Y;
		cin >> S >> Y;
		a[Y-1][S]++;
	}

	int room = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 2; j++) {
			if (a[i][j] == 0) {
				room += 0;
			}
			else if (a[i][j]%K==0) {
				room += (a[i][j] / K);
			}
			else {
				room += (a[i][j] / K) + 1;
			}
		}
	}
	cout << room;
}