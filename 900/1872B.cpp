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
		int a[201] = {};
		for (int i=0;i<n;i++) {
			int door , secs; cin >> door >> secs;
			if (a[door] == 0 || a[door] > secs) a[door] = secs;
		}
		int k = 1e9;
		for (int i=1;i<=200;i++) if (a[i] != 0) k = min(i+(a[i]/2+(a[i]%2) - 1) , k);
		cout << k << '\n';
	}


  	     
  return 0;
}