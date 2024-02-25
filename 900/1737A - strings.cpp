// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		string s; cin >> s;
		map<char,int>m;
		for (int i=97;i<=97+25;i++) m[i]=0;
		for (int i=0;i<n;i++) m[s[i]]++;
		vector<char>a;
		for (int i=0;i<k;i++) {
			int count = 0;
			for (auto [key,v] : m) {
				if (v <= 0 || count == n/k) {
					m[key]--;
					a.push_back(key); break;
				}
				m[key]--; count++; 
			}
			count = 0;
		}
		for (int i=0;i<size(a);i++) cout << a[i];
		cout << '\n';
	}
	

	return 0;
}