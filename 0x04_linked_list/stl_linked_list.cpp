#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	list<int> L = {1, 2}; // 1 2
	list<int>::iterator it = L.begin(); // t는 1을 가리키는 중
	
	// push_front, push_back, pop_front, pop_back은 O(1)에 동작
	L.push_front(10);     // 10 1 2 
	cout << *it << '\n';  // *it=1, it가 가리키는 값 = 1을 출력
	
	L.push_back(5);       // 10 1 2 5
	
	L.insert(it, 6);      // 10 6 1 2 5, it가 기리키는 곳 앞에 6을 삽입

	it++;                 // *it=2, it를 next로 이동

	it = L.erase(it);     // it가 가리키는 값을 제거, 그 다음 원소인 5의 위치를 반환
	                      // 10 6 1 5, it가 가리키는 값은 5 (제거한 원소의 next원소)

	cout << *it << '\n';  // 5

	for (auto i: L) cout << i << ' ';
	cout << '\n';

	for (list<int>::iterator it = L.begin(); it!=L.end(); it++) {
		cout << *it << ' ';
	}

}