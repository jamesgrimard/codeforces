// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n) , b(101);
		int o = 0 , e = 0 , p = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			(a[i] % 2 == 1) ? o++ : e++;
			b[a[i]] = 1;
		}
		for (int i=1;i<=100;i++) if (b[i] == b[i-1] && b[i] == 1) {p++;i++;}

		(o % 2 == e % 2 && p >= (o % 2)) ? cout << "YES\n" : cout << "NO\n";
		
		//cout << o << " " << e << " " << p << '\n';
		

	}

	return 0;
}

