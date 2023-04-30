// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	string s; cin >> s;
	map<char,bool> m;
	for (int i=0;i<k;i++) {
		char c; cin >> c;
		m[c] = 1;
	}
	vector<long long> a;
	int tally = 0;
	for (int i=0;i<n;i++) {
		if (m[s[i]] == 1) tally++;
		if (m[s[i]] != 1 || i == n-1) {
			a.push_back(tally);
			tally = 0;
		}
	}
	long long sum = 0;
	for (int i=0;i<a.size();i++) sum += (a[i]*a[i]+a[i])/2;
	cout << sum << '\n';

	return 0;
}