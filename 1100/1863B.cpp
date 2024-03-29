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
		bool a[n+1] = {};
		int cnt = 0; 
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			a[x] = 1;
			if (a[x-1] == 0) cnt++;
		}
		cout << cnt - 1<< '\n';
	}



	
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();

  return 0;
}
