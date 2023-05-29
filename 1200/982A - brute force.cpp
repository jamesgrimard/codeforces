// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n; cin >> n;
	string s; cin >> s;
	bool f= 1;
	for (int i=0;i<n;i++) {
		if (i != 0 && i != n-1) {
			if (s[i] == '1' && (s[i+1] == '1' || s[i-1] == '1')) f = 0;
			if (s[i] == '0' && s[i+1] == '0' && s[i-1] == '0') f= 0;
		}
		if (i == 0) {
			if (n == 1 && s[i] == '0') f= 0;
			if (n > 1 && s[i] == '0' && s[i+1] == '0') f= 0;
			if (n > 1 && s[i] == '1' && s[i+1] == '1') f= 0;
		} else if (i == n-1) {
			if (n > 1 && s[i] == '0' && s[i-1] == '0') f= 0;
		}
	}
	f == 1 ? cout << "Yes\n" : cout << "No\n";


	return 0;	
}

		