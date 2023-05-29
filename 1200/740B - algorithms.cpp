// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	vector<int> a(n), r(n) , s(k);
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=0;i<k;i++) {
		int L,R; cin >> L >> R;
		for (int j=L-1;j<R;j++) {
			s[i] += a[j];
		}
	}
	int cnt = 0;
	for (int i=0;i<k;i++) {
		if (s[i] >= 0) cnt += s[i];
	}
	cout << cnt;


	return 0;	
}

		