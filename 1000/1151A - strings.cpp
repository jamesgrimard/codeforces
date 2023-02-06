// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	string s; cin >> s;
	string S = "ACTG";
	int cnt = 26*50;
	for (int i=0;i<=n-4;i++) {
		int count = 0;
		for (int j=0;j<4;j++) {
			count += min(abs(s[i+j]-S[j]),min(('Z'-s[i+j])+(S[j]-'A')+1,s[i+j]-'A'+('Z'-S[j])+1));
		}
		cnt = min(count,cnt);
	}

	cout << cnt;

	return 0;
}