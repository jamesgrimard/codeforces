// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		vector<int> mx1(5+1) , mx2(5+1) , mn1(5+1) , mn2(5+1);
		int ans = 10;
		for (int i=0;i<10;i+=2) {
			mx1[i/2+1] = mx1[i/2];
			mx2[i/2+1] = mx2[i/2];
			mn1[i/2+1] = mn1[i/2];
			mn2[i/2+1] = mn2[i/2];
			if (s[i] == '1') {
				mx1[i/2+1]++;
				mn1[i/2+1]++;
			} else if (s[i] == '?') {
				mx1[i/2+1]++;
			}
			if (s[i+1] == '1') {
				mx2[i/2+1]++;
				mn2[i/2+1]++;
			} else if (s[i+1] == '?') {
				mx2[i/2+1]++;
			}
		}
		for (int i=1;i<=5;i++) {
			if (mx1[i] - mn2[i-1] > 5 - i + 1) {
				ans = i * 2 - 1;
				break;
			}
			if (mx1[i] - mn2[i] > 5 - i) {
				ans = i * 2;
				break;
			}
		}
		for (int i=1;i<=5;i++) {
			if (mx2[i-1] - mn1[i] > 5 - i) {
				ans = min(i * 2 - 1,ans);
				break;
			}
			if (mx2[i] - mn1[i] > 5 - i) {
				ans = min(i * 2,ans);
				break;
			}
		}

		cout << ans << '\n';
	}

	return 0;
}