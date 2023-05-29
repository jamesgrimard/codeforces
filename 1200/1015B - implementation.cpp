// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	string s,S;cin >>s >> S;
	vector<int> a(26),b(26);
	for (int i=0;i<s.size();i++) {
		a[s[i]-'a']++;
		b[S[i]-'a']++;
	}
	bool f= 1;
	for (int i=0;i<26;i++) {
		if (a[i] != b[i]) f= 0;
	}
	if (f) {
		vector<int> o;
		for (int i=0;i<s.size();i++) {
			if (S[i] != s[i]) {
				for (int j=i+1;j<s.size();j++) {
					if (s[j] == S[i]) {
						for (int k=j-1;k>=i;k--) {
							o.push_back(k+1);
							swap(s[k],s[k+1]);
						}
						break;
					}
				}
			}
		}
		cout << o.size() << '\n';
		for (auto v:o) cout << v << " ";
	} else {
		cout << -1;
	}

	return 0;	
}