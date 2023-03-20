// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , x; cin >> n >> x;
	int cnt =0 ;
	for (int i=0;i<n;i++) {
		int temp; cin >> temp;
		cnt += temp;
	}
	(cnt + (n-1) == x) ? cout << "YES\n" : cout << "NO\n";

	return 0;
		
}

