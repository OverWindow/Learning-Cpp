#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

// 2470번 투 포인터, 정렬 

int main(void) {
	int N;
	scanf("%d",&N);
	
	vector<int> list(N,0);
	
	for(int i = 0 ; i < N; i++) {
		scanf("%d",&list[i]);
	}
	
	sort(list.begin(),list.end());
	
	int i = 0;
	int j = N - 1;
	int least = abs(list[i] + list[j]);
	int A = list[i];
	int B = list[j];
	while(i < j) {
		if(list[i] + list[j] == 0) {
			A = list[i];
			B = list[j];
			break;
		} else if(list[i] + list[j] > 0) {
			if(least > abs(list[i] + list[j])) {
				A = list[i];
				B = list[j];
				least = abs(list[i] + list[j]);
			}
			j--;
		} else if(list[i] + list[j] < 0) {
			if(least > abs(list[i] + list[j])) {
				A = list[i];
				B = list[j];
				least = abs(list[i] + list[j]);
			}
			i++;
		}
	}
	printf("%d %d\n",A,B);
	return 0;
}
