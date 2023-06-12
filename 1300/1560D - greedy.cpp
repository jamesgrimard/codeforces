// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	vector<long long> A;
	long long p = 1;
	while(p*2 <= 1000000000000000000) {A.push_back(p);p*=2;}

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		int mn = s.size()+1;
		for (int i=0;i<A.size();i++) {
			string a = to_string(A[i]);
			int P = 0;
			for (int j=0;j<s.size();j++) {
				if (s[j] == a[P]) P++;
			}
			mn = min(mn,(int)s.size()-P + ((int)a.size()-P));
		}
		cout << mn << '\n';
	}

	return 0;	
}