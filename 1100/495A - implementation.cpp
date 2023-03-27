// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;

	map<char,vector<int>> m;

	m['0'] = {0,8};
	m['1'] = {0,1,3,4,7,8,9};
	m['2'] = {2,8};
	m['3'] = {3,8,9};
	m['4'] = {4,8,9};
	m['5'] = {5,6,8,9};
	m['6'] = {6,8};
	m['7'] = {0,3,7,8,9};
	m['8'] = {8};
	m['9'] = {8,9};

	cout << m[s[0]].size() * m[s[1]].size();


	return 0;
}

