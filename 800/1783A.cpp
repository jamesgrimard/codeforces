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
		int a[n]; for (int i=0;i<n;i++) cin >> a[i];
		if (a[0] != a[n-1]) {
			cout << "YES\n" << a[n-1] << " " << a[0] << " ";
			for (int i=n-2;i>0;i--) cout << a[i] << " ";
			cout << '\n';
		} else {
			cout << "NO\n";
		}
	}
                           
	return 0;
}