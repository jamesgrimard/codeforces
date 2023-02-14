// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;

	map<string,string> m,M;

	for (int i=0;i<k;i++) {
		string a , b; cin >> a >> b;
		m[a] = b; m[b] = a;
	}

	for (int i=0;i<n;i++) {
		string s; cin >> s;
		if (m[s] != "") {
			(m[s].size() < s.size()) ? cout << m[s] : cout << s;
		} else {
			(M[s].size() <= s.size()) ? cout << M[s] : cout << s;
		}
		cout << " ";
	}


	return 0;
}
