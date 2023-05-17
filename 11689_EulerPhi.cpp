#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

// 11689 오일러 피 함수, Euler's Phi function
// N의 소인수들 집합 S(중복없음) 
// N = N - N/(S1) - N/(S2) ....... 
// N = 서로소의 개수  

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	long long N;
	cin >> N;
	
	long long ans = N;
	for(long long i = 2; i*i <= N; i++) {
		if(N%i == 0) {
			ans = ans - ans/i;
		}
		while(N%i == 0) { 
			N = N/i;
		}
	}
	
	// 루트 N보다 큰 소인수는 1개  혹은 0개이다 
	if(N>1) {
		ans = ans - ans/N;
	}
	cout << ans; 
	return 0;
}
