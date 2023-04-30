// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	int n = s.size() , mx = stoi(s)%10;
	for (int i=0;i<n;i++) {
		string S = s;
		if (i > 0) {
			S[i-1]--;
			for (int j=i;j<n;j++) S[j] = '9';
		}
		int local = 1;
		for (int j=0;j<n;j++) {
			if (S[j] == '0' && j == 0) continue;
			local *= (S[j]-'0');
		}
		mx = max(mx,local);
	}
	cout << mx << '\n';

	return 0;
}