// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin>> tt;
	while (tt--) {
		string s; cin>>s;
		s = "L" + s;
		int cnt = 0 , mx = 0;
		for (int i=size(s)-1;i>=0;i--){
			cnt++;
			if (s[i] == 'R' || i == 0) {
				mx = max(mx,cnt);
				cnt = 0;
			}
		}
		cout << mx << '\n';
	}

	return 0;
}

