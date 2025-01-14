#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int N;
	cin >> N;

	int feeY = 0;
	int feeM = 0;
	for (int i = 0; i < N; i++) {
		int time;
		cin >> time;
		
		feeY += ((time / 30) + 1) * 10;
		feeM += ((time / 60) + 1) * 15;
	}

	if (feeY < feeM) cout << "Y " << feeY;
	else if (feeM < feeY) cout << "M " << feeM;
	else cout << "Y M " << feeY;
}