// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while(tt--) {
		string s;
		cin>>s;

		bitset<100> a(s);
		int cnt = a.count(), len = s.size();

		(min(cnt,len-cnt) % 2 == 0) ? cout << "NET" : cout << "DA";
		cout << '\n';
	}


	return 0;
}

