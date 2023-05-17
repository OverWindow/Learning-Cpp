#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

// 2436 NumTheory
// A = a * gcd 
// B = b * gcd
// lcm = a * b * gcd
// lcm / gcd = a * b

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int gcd,lcm;
	cin >> gcd >> lcm;
	
	long long total = lcm/gcd;
	
	long long a,b,ansA, ansB,sum = 200000000;
	for(long long i = 1; i*i <= total; i++) {
		if(total%i != 0) continue;
		a = total/i;
		b = i;
		
		while(1) {
			long long tmp;
			tmp = a;
			a = b;
			b = tmp%b;
			if(b == 0) break;
		}
		if(a != 1) continue;
		if(sum < i + total/i) continue;
		//cout << i << " " << total/i << "\n";
		ansA = i * gcd;
		ansB = (total/i) * gcd;
		sum = i + total/i;
	}
	
	cout << ansA << " " << ansB << "\n";
	return 0;
}
