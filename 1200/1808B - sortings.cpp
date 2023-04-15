// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--) {
		int n , m; cin >> n >> m;
		vector<vector<long long>> a(n,vector<long long>(m));
		for (int i=0;i<n;i++) {
			for (int j=0;j<m;j++) cin >> a[i][j];
		}
		long long sum = 0;
		for (long long j=0;j<m;j++) {
			long long S = 0;
			sort(begin(a),end(a), [&](vector<long long> &l, vector<long long> &r){
				return l[j] < r[j]; 
			});
			for (long long i=0;i<n;i++) {
				S += a[i][j];
				sum += (a[i][j]*(i+1)-S);
			}
		}
		
		cout << sum << '\n';
	}

	return 0;
}
