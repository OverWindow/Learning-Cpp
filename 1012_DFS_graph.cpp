#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 1012 DFS and graph

static int M,N,K;
static vector<vector<int>> field;
static vector<vector<bool>> visited;

void DFS(int i, int j) {
	if(field[i][j] == 0 || visited[i][j] == true) {
		return;
	}
	visited[i][j] = true;
	// north
	if(j != N-1) {
		DFS(i,j+1);
	}
	// east
	if(i != M-1) {
		DFS(i+1,j);
	} 
	// south
	if(j != 0) {
		DFS(i,j-1);
	} 
	// west
	if(i != 0) {
		DFS(i-1,j);
	}
	return;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T;
	cin >> T;
	
	for(int _ = 0; _ < T; _++) {
		int cnt = 0;
		cin >> M >> N >> K;
		field.resize(50,vector<int>(50,0));
		visited.resize(50,vector<bool>(50,false));
		fill(field.begin(),field.end(),vector<int>(50,0));
		fill(visited.begin(),visited.end(),vector<bool>(50,false));
		for(int i = 0; i < K; i++) {
			int a,b;
			cin >> a >> b;
			field[a][b] = 1;
		}
		
		for(int i = 0; i < M; i++) {
			for(int j = 0; j < N; j++) {
				if(field[i][j] == 0) continue;
				if(field[i][j] == 1 && visited[i][j] == false) {
					DFS(i,j);
					cnt += 1;
				}
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}
