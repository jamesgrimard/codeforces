// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	string s;
	getline(cin,s);

	string S;
	getline(cin,S);

	map<char,int> M,m;
	for (int i=0;i<s.size();i++) m[s[i]]++;
	for (int i=0;i<S.size();i++) M[S[i]]++;

	bool ans = 1;
	for (auto [k,v] : M) {
		if (k == ' ') continue;
		if (m[k] < v) ans = 0;
	}
	ans == 1 ? cout << "YES\n" : cout << "NO\n";


	return 0;
}
