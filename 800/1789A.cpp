// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

int find_gcd(int a , int b) {
	if (a % b == 0) return b;
	return find_gcd(b,a%b);
}

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int a[n]; for (int i=0;i<n;i++) cin >> a[i];                  
		bool ans = 0;
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) {
				if (j == i) continue;
				if (find_gcd(a[i],a[j]) <= 2) ans = 1;
			}
		}
		(ans) ? cout << "YES\n" : cout << "NO\n";			
	}	
		
	return 0;
}