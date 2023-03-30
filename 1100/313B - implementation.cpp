// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	string s; cin >> s;
	vector<int> a(s.size());
	int n; cin >> n;
	for (int i=1;i<s.size();i++) {
		(s[i] == s[i-1]) ? a[i] = a[i-1]+1 : a[i] = a[i-1];
	}
	for (int i=0;i<n;i++) {
		int l,r; cin >> l >> r;
		cout << a[r-1] - a[l-1] << '\n';
	}

	return 0;
}