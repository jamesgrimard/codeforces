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
		int n; cin >> n;
		int a[n+2]; for (int i=1;i<=n;i++) cin >> a[i];			
		a[0] = 0 , a[n+1] = 1440;
		int cnt = 0;
		for (int i=1;i<=n+1;i++) {
			if (a[i] + 1 - a[i-1] >= 120) cnt++;
			if (a[i] - a[i-1] >= 239) cnt++;
		}
		(cnt >= 2) ? cout << "YES\n" : cout << "NO\n";
	}			

 	
 	return 0;
}