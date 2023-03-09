// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		string s; cin >> s;
		int cnt = 0 , first = -1 , last = 0;
		for (int i=0;i<n;i++) {
			if (s[i] == '*') {
				s[i] = 'x';
				cnt++;
				if (first == -1) first = i;
				last = i;
			}
		}
		for (int i=0;i<n;i++) {
			if (s[i] == 'x') {
				int tally = 0 , index = i+1;
				for (int j=i+1;j<min(n,k+1+i);j++) {
					if (s[j] == 'x') {
						tally++;
						index = j;
					}
				}
				cnt -= max(0,tally-1);
				i = index-1;
			}
		}	
		
		cout << cnt << '\n';
	}

	return 0;
}

