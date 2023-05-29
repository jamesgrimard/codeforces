// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n , k , m; cin >> n >> k >> m;
	vector<string> s(n);
	for (int i=0;i<n;i++) cin >> s[i];
	vector<int> c(n);
	for (int i=0;i<n;i++) cin >> c[i];
	map<string,int> M;
	for (int i=0;i<k;i++) {
		int q; cin >> q;
		int mn = 0;
		vector<int> tmp(q);
		for (int j=0;j<q;j++) {
			cin >> tmp[j];
			if (j == 0) mn = c[tmp[j]-1];
			mn = min(mn,c[tmp[j]-1]);
		}
		for (int j=0;j<q;j++) M[s[tmp[j]-1]] = mn;
	}
	long long sum = 0;
	for (int i=0;i<m;i++) {
		string S; cin >> S;
		sum += M[S];
	}
	cout << sum << '\n';

	return 0;	
}

		