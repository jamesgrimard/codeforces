// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	string s;
	cin >> tt >> s;

	int cnt1 = 0 , cnt0 = 0;

	for (int i=0;i<tt;i++){
		(s[i] == '1') ? cnt1++ : cnt0++;
	}

	cout << (tt - (2 * min(cnt1,cnt0)));

	return 0;
}

