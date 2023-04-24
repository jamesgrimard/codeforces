// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n),m(101);
		for (int i=0;i<n;i++) cin >> a[i];
		int mx = 0;
		for (int i=0;i<n;i++) {
			for (int j=i+1;j<n;j++) {
				if (m[a[i]+a[j]] == 1) continue;
				m[a[i]+a[j]] = 1;
				vector<bool> ref(n);
				ref[i] = 1 , ref[j] = 1;
				int local = 0;
				for (int l=0;l<n;l++) {
					if (ref[l] == 1) continue;
					for (int r=l+1;r<n;r++) {
						if (ref[r] == 1) continue;
						if (a[l] + a[r] == a[i] + a[j]) {
							local++;
							ref[r] = 1;
							break;
						}
					}
				}
				mx = max(local+1,mx);
			}
		}
		cout << mx << '\n';
	}

	return 0;
}