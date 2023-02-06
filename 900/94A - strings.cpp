// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;

	map<string,int> m;

	for (int i=0;i<10;i++) {
		string x; cin >> x;
		m[x] = i;
	}

	string out = "";

	for (int i=0;i<80;i+=10) {
		cout << m[s.substr(i,10)];
	}


	return 0;
}