// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	char p ; cin >> p;
	string a , b; cin >> a >> b;
	map<char,int> m;
	m['6'] = 6 , m['7'] = 7 , m['8'] = 8 , m['9'] = 9 , m['T'] = 10 , m['J'] = 11 , m['Q'] = 12;
	m['K'] = 13 , m['A'] = 14; 

	if (a[1] == p && b[1] != p) {
		cout << "YES";
	} else if ((a[1] != p && b[1] == p) || (a[1] != b[1])) {
		cout << "NO";
	} else {
		(m[a[0]] > m[b[0]]) ? cout << "YES" : cout << "NO";
	}

	return 0;
}

