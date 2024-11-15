#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	string a, b;
	int freqA[26]={}, freqB[26]={};

	cin >> a >> b;
	for (auto c: a) freqA[c-'a']++;
	for (auto c: b) {
		if (freqA[c-'a']) {
			freqA[c-'a']--;
		}
		else {
			freqB[c-'a']++;
		}
	}

	int sum = 0;
	for (int i: freqA) sum += i;
	for (int i: freqB) sum += i;

	cout << sum;
}