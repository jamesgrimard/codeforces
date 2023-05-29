// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , l , r; cin >> n >> l >> r;

	string s; cin >> s;

	(s[l-1] == s[r-1]) ? cout << 0 : cout << 1;

	return 0;	
}

		