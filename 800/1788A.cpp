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
		int a[1001] , cnt = 0; for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (x == 2) {
				cnt++;
				a[cnt] = i+1;
			}
		}
		(cnt % 2) ? cout << -1 << '\n' : cout << max(1,a[cnt/2]) << '\n';
	}

	return 0;
}