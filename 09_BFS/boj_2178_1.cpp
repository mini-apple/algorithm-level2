#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n, m;
	cin >> n >> m;

	vector<string> board(n);
	vector<vector<int>> dist(n, vector<int>(m, 0));

	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}

	queue<pair<int, int>> Q;
	Q.push({0, 0});
	dist[0][0] = 1;

	while (!Q.empty()) {
		auto cur = Q.front(); Q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx<0 || ny<0 || nx>=n || ny>=m) continue;
			if (dist[nx][ny]>0 || board[nx][ny]!='1') continue;

			Q.push({nx, ny});
			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
		}
	}

	cout << dist[n-1][m-1];
}