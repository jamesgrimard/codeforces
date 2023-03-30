// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	vector<string> a(4);
	for (int i=0;i<4;i++) cin >> a[i];
	bool ans = 0;
	for (int i=0;i<4-1;i++) {
		for (int j=0;j<4-1;j++) {
			int cnt = 0 , cnt2 = 0;
			if (a[i][j] == '#') cnt++;
			if (a[i+1][j] == '#') cnt++;
			if (a[i][j+1] == '#') cnt++;
			if (a[i+1][j+1] == '#') cnt++;
			if (a[i][j] == '.') cnt2++;
			if (a[i+1][j] == '.') cnt2++;
			if (a[i][j+1] == '.') cnt2++;
			if (a[i+1][j+1] == '.') cnt2++;
			if (cnt2 > 2 || cnt > 2) ans = 1;
		}
	}
	ans == 1 ? cout << "YES\n" : cout << "NO\n";
	return 0;
}
