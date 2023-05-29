// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int>T(n+1),B(n+1);
		vector<pair<int,pair<int,int>>> a(n);
		bool ans = 1;
		for (int i=0;i<n;i++) {
			int x; cin>>x;
			a[i].first = i+1;
			if (T[x] == 0) {
				T[x]++;
				a[i].second.first = x;
			} else if (B[x] == 0) {
				B[x]++;
				a[i].second.second = x;
			} else {
				ans = 0;
			}
		}
		sort(begin(a),end(a),[](auto a , auto b){
			return max(a.second.first,a.second.second) < max(b.second.first,b.second.second);
		});
		vector<pair<int,int>> o(n+1);
		int t=1,b=1;
		for (int i=0;i<n;i++) {
			if (a[i].second.first == 0) {
				while (T[t] > 0 && t < a[i].second.second) t++;
				if (T[t] == 0 && t <= a[i].second.second) {
					T[t]++;
					o[a[i].first].first = t;
					o[a[i].first].second = a[i].second.second;
				}
				if (o[a[i].first].first == 0) {
					ans = 0;
					break;
				}
			} else {
				while (B[b] > 0 && b < a[i].second.first) b++;
				if (B[b] == 0 && b <= a[i].second.first) {
					B[b]++;
					o[a[i].first].first = a[i].second.first;
					o[a[i].first].second = b;
				}
				if (o[a[i].first].second == 0) {
					ans = 0;
					break;
				}
			}
		}

		if (ans) {
			cout << "YES\n";
			for (int i=1;i<=n;i++) cout << o[i].first << " ";
			cout << '\n';
			for (int i=1;i<=n;i++) cout << o[i].second << " ";
			cout << '\n';
		} else {
			cout << "NO\n";
		}
	}

	return 0;	
}

		