// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int n; cin >>n;
		string s; cin >> s;
		int tally = 0;
		for (int i=0;i<n-1;i++){
			if (s[i] == '0') continue;
			if (s[i] == '1' && s[i+1] == '0') tally++; 
		}
		tally *= 2;
		(s[n-1] == '1') ? cout << tally : cout << max(0,(tally-1));
		cout << '\n';
		
	}
	

	return 0;
}

