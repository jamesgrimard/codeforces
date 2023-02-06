// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	map<string,int> m;

	m["January"]=1; m["February"]=2; m["March"]=3; m["April"]=4; m["May"]=5; m["June"]=6; m["July"]=7; m["August"]=8; m["September"]=9; m["October"]=10; m["November"]=11; m["December"]=12;
	
	string s; cin >> s;
	int n; cin >> n;
	int k = (m[s]+n)%12;
	//cout << m[k];
	if (k == 0) k = 12;

	for (auto [dd,v] : m) {
		if (v == k) {
			cout << dd; break;
		}
	}

	return 0;
}

