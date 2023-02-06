// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ,m ; cin >> n >> m;

	map<string,string> M;

	for (int i=0;i<n;i++) {
		string x,y; cin >> x >> y;
		y+=';';
		M[y] = x;
	}

	for (int i=0;i<m;i++) {
		string x,y; cin >>x>>y;
		cout << x << " " << y << " " << "#" << M[y] << '\n';
	}


	return 0;
}

