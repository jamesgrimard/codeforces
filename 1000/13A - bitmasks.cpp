// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int n; cin >> n;
	int sum = 0;
	for (int i=2;i<n;i++) {
		int N = n;
		while(N>0) {
			sum += (N%i);
			N /= i;
		}	
	}
	int k = gcd(sum,n-2);
	cout << sum/k << "/" << (n-2)/k;


	return 0;
}

