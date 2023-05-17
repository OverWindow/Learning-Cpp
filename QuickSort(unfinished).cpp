#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> A;

void QuickSort(int start,int end) {
	if(start >= end) return;
	int pivot = start;
	int i = pivot + 1;
	int j = end;
	
	while(i <= j) {
		if(A[i] <= A[pivot]) {
			i++;
		} else if(A[pivot] <= A[j]) {
			j--;
		} else{
			swap(A[i],A[j]);
			i++;
			j--;
		}
	}
	swap(A[pivot],A[j]);
	QuickSort(start,j-1);
	QuickSort(j+1,end);
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N;
	cin >> N;
	A.resize(N,0);
	for(int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		A.push_back(tmp);
	}
	
	QuickSort(0,A.size()- 1);
	
	for(int i = 0; i < N; i++) {
		cout << A[i] << " ";
	}
	cout << "\n";
	return 0;
}
