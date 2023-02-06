// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ;cin >> n;

	map<string,int> m;

	for (int i=0;i<n;i++) {
		string x; cin >> x;
		map<char,int> M;
		for (int j=0;j<size(x);j++) M[x[j]]++;
		string out = "";
		for (auto [k,v] : M) out += k;
		m[out]++;
	}

	cout << size(m);


	return 0;
}

