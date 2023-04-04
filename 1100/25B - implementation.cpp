// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int n; cin >> n;
	string s; cin>>s;
	for (int i=0;i<n;i++) {
		cout << s[i];
		if (i % 2 == 1 && i < s.size()-2) cout << "-";
	}

	return 0;
}
