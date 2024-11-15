#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int freq[26] = {};
		string a, b;
		cin >> a >> b;
		
		for (auto c : a) freq[c-'a']++;
		for (auto c : b) freq[c-'a']--;
		

		string flag = "Possible";
		for (int j = 0; j < sizeof(freq)/sizeof(*freq); j++) {
			if (freq[j]!=0) {
				flag = "Impossible";
				break;
			}
		}
		
		cout << flag << '\n';
	}
}