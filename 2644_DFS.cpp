#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

// 2644 DFS

int N;
vector<int> A;
vector<vector<int>> node;

void DFS(int cur, int end) {
	if(cur == end) {
		return;
	}
	
	for(int i = 0; i < node[cur].size(); i++) {
		int newPerson = node[cur][i];
		if(A[newPerson] == -1) {
			A[newPerson] = A[cur] + 1;
			DFS(newPerson,end);
		}	
	}
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> N;
	A.resize(N+1,-1);
	int start,end;
	cin >> start >> end;
	
	int line;
	cin >> line;
	
	node.resize(N+1);
	for(int i=0; i < line; i++) {
		int a,b;
		cin >> a >> b;
		node[a].push_back(b);
		node[b].push_back(a);
	}
	A[start] = 0;
	DFS(start,end);
	
	if(A[end] == -1) {
		cout << -1 << "\n";
	} else {
		cout << A[end] << "\n";
	}
	return 0;
}
