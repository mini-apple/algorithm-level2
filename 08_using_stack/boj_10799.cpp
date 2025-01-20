#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	string s;
	cin >> s;

	stack<char> stk;
	int num = 0;
	char prev = ' ';
	for (char c: s) {
		if (!stk.empty() && stk.top()=='(' && c==')') {
			stk.pop();
			if (prev == '(') {
				num += stk.size();
			}
			else {
				num += 1;
			}
		}
		else stk.push(c);
		
		prev = c; 
	}
	cout << num;
}