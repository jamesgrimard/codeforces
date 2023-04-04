// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	string s; cin >> s;
	string a = s.substr(0,n) , b = s.substr(n,n);
	sort(begin(a),end(a));
	sort(begin(b),end(b));

	bool small = 1 , big = 1;

	for (int i=0;i<n;i++) {
		if (a[i] <= b[i]) big = 0;
		if (a[i] >= b[i]) small = 0;
	}

	(small == 1 || big == 1) ? cout << "YES\n" : cout << "NO\n";

	return 0;
}
