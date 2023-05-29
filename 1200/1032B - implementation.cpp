// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	vector<pair<int,int>> a(6);
	int n = s.size(), q;
	for (int i=1;i<=5;i++) {
		a[i].first = n/i;
		a[i].second = n % i;
		if (a[i].second != 0) {
			a[i].second = i - a[i].second;
			a[i].first++;
		}
		if (a[i].first <= 20) {
			q = i;
			for (int j=0;j<s.size();j++) {
				if (j % a[i].first == 0 && a[i].second > 0) {
					s = s.substr(0,j) + "*" + s.substr(j,s.size()-j);
					a[i].second--;
				}
			}
			cout << i << " " << a[i].first << '\n';
			break;
		}
	}
	for (int i=0;i<s.size();i++) {
		if (i != 0 && i % a[q].first == 0) cout << '\n';
		cout << s[i];
	}

	return 0;	
}