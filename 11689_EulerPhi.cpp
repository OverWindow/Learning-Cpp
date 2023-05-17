#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

// 11689 ���Ϸ� �� �Լ�, Euler's Phi function
// N�� ���μ��� ���� S(�ߺ�����) 
// N = N - N/(S1) - N/(S2) ....... 
// N = ���μ��� ����  

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
	
	// ��Ʈ N���� ū ���μ��� 1��  Ȥ�� 0���̴� 
	if(N>1) {
		ans = ans - ans/N;
	}
	cout << ans; 
	return 0;
}
