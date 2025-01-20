#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n;
	cin >> n;

	vector<string> board(n);
	vector<vector<int>> vis(n, vector<int>(n, 0));

	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}

	int totalNum = 0;
	vector<int> eachNum;

	for (int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if (board[i][j]=='0' || vis[i][j]==1) continue;
			
			totalNum++;
			int house = 0;
			queue<pair<int, int>> Q;
			
			vis[i][j] = 1;
			Q.push({i, j});
			house++;

			while (!Q.empty()) {
				auto cur = Q.front(); Q.pop();
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];

					if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
					if (board[nx][ny]!= '1' || vis[nx][ny]==1) continue;

					vis[nx][ny] = 1;
					Q.push({nx, ny});
					house++;
				}
			}
			eachNum.push_back(house);
		}
	}

	cout << totalNum << '\n';
	sort(eachNum.begin(), eachNum.end());
	for (int i: eachNum) {
		cout << i << '\n';
	}
}