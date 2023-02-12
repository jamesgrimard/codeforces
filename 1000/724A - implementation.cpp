// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s, S;cin >> s>>S;
	map<string,int> m;
	m["monday"] = 1 , m["tuesday"] = 2 , m["wednesday"] = 3 , m["thursday"] = 4 , m["friday"] = 5; 
	m["saturday"] = 6 , m["sunday"] = 7;

	if (m[S] < m[s]) m[S] += 7;
	(s == S || m[S] - m[s] == 2 || m[S] - m[s] == 3) ? cout << "YES" : cout << "NO";

	return 0;

}
