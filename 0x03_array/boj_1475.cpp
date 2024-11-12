#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int freq[10] = {};
	
	int input;
	cin >> input;
	
	while (input > 0) {
		int d = input % 10;
		freq[d] += 1;
		input /= 10;
	}

	freq[6] += freq[9]; freq[9] = 0;
	freq[6] = (freq[6] + 1) / 2;

	cout << *max_element(freq, freq+10);
}