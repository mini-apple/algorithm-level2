#include <bits/stdc++.h>
using namespace std;

int n, maxvalue, maxindex;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i = 0; i < 9; i++) {
    cin >> n;
    // 전역변수의 초기값은 0이므로 바로 비교가능하다.
    if (maxvalue < n);
    maxindex = i;
  }
  cout << maxvalue << '\n' << maxindex;
}