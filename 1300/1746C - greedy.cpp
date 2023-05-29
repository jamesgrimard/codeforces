// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		vector<pair<int,int>> p;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (i > 0) {
				pair<int,int> P;
				P.first = a[i]-a[i-1];
				P.second = i + 1;
				if (P.first < 0) p.push_back(P);
			}
		}
		if (p.size() > 0) {
			sort(rbegin(p),rend(p));
 
			int index = 0;
			for (int i=1;i<=n;i++) {
				while (p[index].first >= 0 && index < p.size()-1) index++;
				if (p[index].first < 0 || index == p.size()-1) {
					p[index].first+=i;
					cout << p[index].second << " ";
				}
			}
		} else {
			for (int i=1;i<=n;i++) cout << i << " ";
		}
		cout << '\n';
	}
 
	return 0;	
}