#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int t;
	cin >> t;

	while (t--) {
		int m, n, k;
		cin >> m >> n >> k;

		vector<vector<int>> board(n, vector<int>(m, 0));
		vector<vector<int>> vis(n, vector<int>(m, 0));

		while (k--) {
			int a, b;
			cin >> a >> b;
			board[b][a] = 1;
		}

		int num = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (board[i][j]==0 || vis[i][j]==1) continue;
				num++;

				queue<pair<int, int>> Q;
				vis[i][j] = 1;
				Q.push({i, j});

				while (!Q.empty()) {
					auto cur = Q.front(); Q.pop();
					for (int dir = 0; dir < 4; dir++) {
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];

						if (nx<0 || ny<0 || nx>=n || ny>=m) continue;
						if (board[nx][ny]!=1 || vis[nx][ny]==1) continue;
						vis[nx][ny] = 1;
						Q.push({nx, ny});
					}
				}
			}
		}
		cout << num << '\n';
	}
}