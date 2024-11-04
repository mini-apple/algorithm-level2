#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	
	int grade;
	cin >> grade;
	if (90 <= grade) cout << 'A';
	else if (80 <= grade && grade < 90) cout << 'B';
	else if (70 <= grade && grade < 80) cout << 'C';
	else if (60 <= grade && grade < 70) cout << 'D';
	else cout << 'F';
}
