// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int mn = 0 , a = 0;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (i == 0) a = x;
			if (i == 0 || mn > x) mn = x;
		}
		a > mn ? cout << "Alice\n" : cout << "Bob\n";
	}
	
	return 0;
}