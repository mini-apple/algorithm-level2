#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int m, n, k;
	cin >> m >> n >> k;

	vector<vector<int>> board(m, vector<int>(n, 1));
	vector<vector<int>> vis(m, vector<int>(n, 0));

	while (k--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int i = x1; i < x2; i++) {
			for (int j = y1; j < y2; j++) {
				board[j][i] = 0;
			}
		}
	}

	int num = 0;
	vector<int> areaList;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (vis[i][j]==1 || board[i][j]==0) continue;
			
			num++;
			int area=0;
			
			queue<pair<int, int>> Q;
			Q.push({i, j});
			vis[i][j] = 1;
			area++;

			while (!Q.empty()) {
				auto cur = Q.front(); Q.pop();
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];

					if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
					if (vis[nx][ny]==1 || board[nx][ny]==0) continue;

					Q.push({nx, ny});
					vis[nx][ny] = 1;
					area++;
				}
			}
			areaList.push_back(area);
		}
	}
	
	sort(areaList.begin(), areaList.end());
	cout << areaList.size() << '\n';
	for (int i: areaList) {
		cout << i << ' ';
	}
}