#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stdlib.h>
using namespace std;

int main() {
	
	int (*array)[6] = (int (*)[6])malloc(6*4*sizeof(int));
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 6; j++) {
			array[i][j] = i * j;
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
