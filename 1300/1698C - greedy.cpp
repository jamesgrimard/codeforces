// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
 	int tt; cin >> tt;
 	while (tt--) {
 		int n; cin >> n;
 		vector<long long> a(n);
 		map<long long,bool> m;
 		for (int i=0;i<n;i++) {
 			cin >> a[i];
 			m[a[i]] = 1;
 		}
 		sort(begin(a),end(a));
 		bool ans = 1;
 		if (n >= 5) {
 			for (int i=1;i<n-1;i++) if (a[i] != 0) ans = 0;
 			if (m[a[0]+a[n-1]] == 0) ans = 0;
 		} else {
 			for (int i=0;i<n-2;i++) {
 				for (int j=i+1;j<n-1;j++) {
 					for (int k=j+1;k<n;k++) if (m[a[i]+a[j]+a[k]] == 0) ans = 0;
 				}
 			}
 		}

 		ans == 1 ? cout << "YES\n" : cout << "NO\n";
 	}


	return 0;	
}