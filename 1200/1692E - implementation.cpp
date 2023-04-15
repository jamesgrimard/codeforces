// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		vector<int> a(n),b,c;
		b.push_back(0); c.push_back(0);
		int cnt = 0 , cnt1 = 0 , p = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (a[i] == 0) cnt++;
			if (a[i] == 1) {
				cnt1++;
				b.push_back(i+1-p);
				b[b.size()-1] += b[b.size()-2];
				p = i + 1;
			}
		}
		if (k > cnt1) {
			cout << -1 << '\n';
			continue;
		}
		cnt = 0; p = n;
		for (int i=n-1;i>=0;i--) {
			if (a[i] == 0) {
				cnt++;
			} else {
				c.push_back(p-i);
				c[c.size()-1] += c[c.size()-2];
				p = i;
			}
		}
		int sum = b[cnt1-k];
		for (int i=0;i<=cnt1-k;i++) {
			sum = min(sum,min(b[i]+c[cnt1-k-i],c[i]+b[cnt1-k-i]));
		}		

		cout << sum << '\n';



	}


	return 0;
}