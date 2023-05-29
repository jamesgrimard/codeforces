// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	long long row = stoll(s.substr(0,s.size()-1));
	map<char,long long> m;
	m['f'] = 5;
	m['e'] = 4;
	m['d'] = 3;
	m['a'] = 2;
	m['b'] = 1;
	m['c'] = 0;

	long long section = row / 4LL;
	if (row % 4LL != 0) section++;
	section = section * 16LL - 3LL;
	if (row % 2) section -= 7LL;
	section -= m[s[s.size()-1]];
	cout << section;

	return 0;	
}

		