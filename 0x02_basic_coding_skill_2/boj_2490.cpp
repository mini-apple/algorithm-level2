#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int a[4];
	for (int i = 0; i < 3; i++) {
		cin >> a[0] >> a[1] >> a[2] >> a[3];
		int bae = count(a, a+4, 0);	

		if (bae==1) cout << 'A' << '\n';
		else if (bae==2) cout << 'B' << '\n';
		else if (bae==3) cout << 'C' << '\n';
		else if (bae==4) cout << 'D' << '\n';
		else cout << 'E' << '\n';
	}
	
}