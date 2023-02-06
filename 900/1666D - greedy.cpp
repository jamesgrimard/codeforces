// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		string s , S; cin >> s >> S;
		vector<int> a;
		map<int,bool> m;
		for (int i=size(S)-1;i>=0;i--) {
			for (int j=size(s)-1;j>=0;j--){
				if (s[j] == S[i] && m[j] == 0) {
					m[j] = 1;
					a.push_back(j); break;
				}
			}
		}

		bool ans = 1;

		for (int i=1;i<size(a);i++) {
			if (a[i] > a[i-1]) ans = 0;
		}

		if (size(a) != size(S)) ans = 0;
		(ans == 1) ? cout << "YES" : cout << "NO";
		cout << '\n';
	}



	return 0;
}

