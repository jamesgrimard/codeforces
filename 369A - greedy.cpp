// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int gcd(int x , int y) {
	if (x % y == 0) return y;
	return gcd(y,(x%y));
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , m , k , count = 0; cin >> n>>m>>k;

	for (int i=0;i<n;i++) {
		int x; cin >> x;
		if (x == 2 && k > 0) {
			k--; continue;
		}
		if (m>0) {
			m--; continue;
		}
		
		count++;
	}
	
	cout << count;

	


	return 0;
}

