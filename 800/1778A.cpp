// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();


	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		bool flag = 0 , _double = 0;
		int cnt = 0;
		int a[n]; for (int i=0;i<n;i++) cin >> a[i];
		for (int i=0;i<n-1;i++) {
			cnt += a[i];
			if (a[i] == -1) {
				flag = 1;
				if (a[i+1] == -1) _double = 1;
			}
		}
		cnt += a[n-1];
		if (_double) {
			cout << cnt + 4 << '\n';
		} else if (flag || a[n-1] == -1) {
			cout << cnt << '\n';
		} else {
			cout << cnt - 4 << '\n';
		}
	}
				
			


 	
 	return 0;
}