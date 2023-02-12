// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , m ; cin >> n >> m;
	string s,S; cin >> s >> S;
	int mn = n;
	string p = "";
	for (int i=0;i<=m-n;i++) {
		int tally = 0;
		string P = "";
		for (int j=0;j<n;j++) {
			if (s[j] != S[i+j]) {
				tally++;
				P += (to_string(j+1) + " ");
			}
		}
		if (tally <= mn) {
			mn = tally;
			p = P;
		}
	}
	cout << mn << '\n';
	for (int i=0;i<size(p);i++) cout << p[i];

	return 0;
}



