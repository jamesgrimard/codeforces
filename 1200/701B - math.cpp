// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	map<int,bool> R,C;
	long long n , q; cin >> n >> q;
	long long cnt = 0 , r = 0 , c = 0;
	for (int i=0;i<q;i++) {
		int y,x; cin >> y >> x;
		if (R[y] == 0 && C[x] == 0) {
			cnt += (n-c);
			R[y] = 1;
			r++;
			cnt += (n-r);
			C[x] = 1;
			c++;
		} else if (C[x] == 0) {
			cnt += (n-r);
			C[x] = 1;
			c++;
		} else if (R[y] == 0) {
			cnt += (n-c);
			R[y] = 1;
			r++;
		}
		cout << (long long)n*(long long)n - cnt << " ";
	}

	return 0;	
}

		