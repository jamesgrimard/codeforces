// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	map<int,string> M;
	map<int,int> m;
	M[1] = "1x12" , M[2] = "2x6" , M[3] = "3x4" , M[4] = "4x3" , M[6] = "6x2" , M[12] = "12x1";
	m[1] = 12 , m[2] = 6 , m[3] = 4 , m[4] = 3 , m[6] = 2 , m[12] = 1;
	for (int i=0;i<n;i++) {
		string s; cin >> s;
		vector<int> a;
		for (auto [k,v] : m) {
			vector<vector<char>> b(k);
			for (int j=0;j<12/v;j++) {
				b[j].resize(v);
				for (int l=0;l<v;l++) {
					b[j][l] = s[j*v+l];
				}
			}
			for (int j=0;j<v;j++) {
				if (b[0][j] == 'O') continue;
				bool ans = 1;
				for (int l=1;l<k;l++) {
					if (b[l][j] == 'O' || b[l-1][j] == 'O') ans = 0;
				}
				if (ans == 1) {
					a.push_back(k);
					break;
				}
			}
		}
		cout << size(a) << " ";
		for (auto q : a) cout << M[q] << " ";
		cout << '\n';
	}

	return 0;
}



