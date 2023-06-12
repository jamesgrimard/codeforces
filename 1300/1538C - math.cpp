// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n; cin >> n;
		long long l ,r ; cin >> l >> r;
		map<long long,long long> m;
		vector<long long> A(n);
		for (long long i=0;i<n;i++) {
			cin >> A[i];
			m[A[i]]++;
		}
		vector<long long> a(m.size()),c(m.size());
		long long index = 0;
		for (auto [k,v] : m) {
			a[index] = k , c[index] = v;
			if (index > 0) c[index] += c[index-1];
			index++;
		}
		long long cnt = 0;
		for (long long i=0;i<n;i++) {
			long long L = 0 , R = a.size()-1 , M , tmp;
			while (L <= R) {
				M = (L+R)/2;
				if (A[i]+a[M] < l) L = M + 1;
				if (A[i]+a[M] >= l) R = M - 1;
			}
			tmp = R;
			L = 0 , R = a.size()-1;
			while (L <= R) {
				M = (L+R)/2;
				if (A[i]+a[M] <= r) L = M + 1;
				if (A[i]+a[M] > r) R = M - 1;
			}
			if (tmp < 0 && R >= 0) {
				cnt += c[R];
			} else {
				cnt += (c[R]-c[tmp]);
			}
			if (A[i]*2LL >= l && A[i]*2LL <= r) cnt--;
			//cout << tmp << " " << R << " " << cnt << '\n';
		}
		cout << cnt / 2 << '\n';
	}

	return 0;	
}