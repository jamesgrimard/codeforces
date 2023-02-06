// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int gcd(int a , int b) {
	if (a % b == 0) return b;
	return gcd(b,a%b);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n; cin >> n;

		vector<int> a(n);

		for (int i=0;i<n;i++) cin >> a[i];
			
		int d = a[0];

		for (int i=0;i<n;i++) d = gcd(d,a[i]);
		
		cout << (a[n-1]/d) << '\n';
		
	}

	return 0;
}

