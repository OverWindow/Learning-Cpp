#include <iostream>
#include <queue>
using namespace std;

// 2164�� queue 

int main(void) {
	int N;
	scanf("%d",&N);
	
	queue<int> que;
	
	for(int i = 1; i < N+1; i++) {
		que.push(i);
	}
	
	while(que.size() > 1) {
		que.pop();
		que.push(que.front());
		que.pop();
	}
	
	printf("%d\n",que.front());
	return 0;
}
