#include <iostream>
#include <vector>
#include <map>
using namespace std;

// 2015�� ������ 
// �� ������ ���̽�
// 1. i������ �������� k�� ���
// 2. i�� j������ �������� k�� ��� �� ������ ���� �� 
// psum[i] - psum[j] = k  ---> psum[i] - k�� ���� psum[j]�� ã�� ��� 
		
int main(void) {
	int N,K;
	scanf("%d %d",&N,&K);
	
	vector<int> psum(N+1,0);
	long long cnt = 0;
	map<int,long long> m;
	
	for(int i = 0; i < N; i++) {
		int tmp;
		scanf("%d",&tmp);
		psum[i+1] = psum[i] + tmp;
		
		if(psum[i+1] == K) cnt += 1;
		
		cnt += m[psum[i+1] - K];
		m[psum[i+1]] += 1;
	}
	
	printf("%lld\n",cnt);
	return 0;	
}
