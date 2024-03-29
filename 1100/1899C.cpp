//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

void solve() {

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int a[n+1] = {}, s[n+1] = {} , m[n+1] = {} , mx; 
		for (int i=1;i<=n;i++) {
			cin >> a[i];		
			if (mod(a[i],2) == mod(a[i-1],2)) {
				s[i] = a[i];
				m[i] = min(0,a[i]);
				(i == 1) ? mx = s[i] : mx = max(s[i],mx);
			} else {
				s[i] = a[i] + s[i-1];
				(i == 1) ? mx = s[i] : mx = max(s[i]-m[i-1],mx);
				m[i] = min(m[i-1],s[i]);
			}			
		}
		cout << mx << '\n';
	}


	
  
}


int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();

  return 0;
}
