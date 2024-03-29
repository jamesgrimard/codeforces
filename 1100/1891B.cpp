//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}


void solve() {

	long long r[31];
	r[0] = 1;
	for (int i=1;i<=30;i++) r[i] = r[i-1] * 2;
 	
	int tt; cin >> tt;
	while (tt--) {
		long long n , q; cin >> n >> q;
		long long a[n]; 
		for (int i=0;i<n;i++) cin >> a[i];
		vector<int> b;
		int mx = 0;
		for (int i=0;i<q;i++) {
			int x; cin >> x;
			if (i == 0 || x <= mx) {
				mx = x-1;
				b.push_back(mx);
      } 			
		}
		for (int i=0;i<n;i++) {
			for (int j=0;j<b.size();j++) {
				if (a[i] % r[b[j]+1] == 0) a[i] += r[b[j]];
			}
			cout << a[i] << " ";
		}
		cout << '\n';
	}




				                        
}


int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();

  return 0;
}
