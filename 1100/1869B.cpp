//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

void solve() {

	int tt; cin >> tt;
	while (tt--) {
		long long n , k , start , finish; cin >> n >> k >> start >> finish;
		long long x[n+1] , y[n+1];
		for (int i=1;i<=n;i++) {
			cin >> x[i];
			cin >> y[i];
		}
		long long direct = 0;
		if (start > k || finish > k) direct = abs(x[start]-x[finish]) + abs(y[start]-y[finish]);
		long long mn1 = 4e9 , mn2 = 4e9; // start -> closest city -> city -> finish
		for (int i=1;i<=k;i++) {
			long long cost1 = abs(x[start]-x[i]) + abs(y[start]-y[i]); 
 			long long cost2 = abs(x[finish]-x[i]) + abs(y[finish]-y[i]);
			mn1 = min(mn1,cost1);
			mn2 = min(mn2,cost2);
		}
		cout << min(mn1+mn2 , direct) << '\n';
	}


				                        
}


int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();

  return 0;
}
