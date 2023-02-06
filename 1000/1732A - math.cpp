// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		int A = 0;
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=0;i<n;i++) A = gcd(a[i],A);
		
		if (A == 1) cout << 0;
		else if (gcd(A,n) == 1) cout << 1;
		else if (gcd(A,n-1) == 1) cout << 2;
		else cout << 3;
		cout << '\n';
	}


	return 0;
}

