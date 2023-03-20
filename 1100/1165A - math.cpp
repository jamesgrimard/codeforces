// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , a , b; cin >> n >> a >> b;
	string s; cin >> s;
	int cnt = 0;
	for (int i=n-1;i>=n-a;i--) {
		if (i == n-(b+1) && s[i] != '1')cnt++;
		if (i != n-(b+1) && s[i] == '1')cnt++;
	}
	cout << cnt << '\n';

	return 0;
}
