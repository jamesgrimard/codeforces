// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , m;cin >> n >> m;

	string s; cin >> s;

	sort(begin(s),end(s));

	string S = "";


	for (int i=0;i<n;i++) {
		if (size(S) == m) break;
		if (i == 0 || s[i]-S[size(S)-1] > 1) S+=s[i];
		
	}

	int sum = 0;

	for (int i=0;i<size(S);i++) sum += S[i];

	if (size(S) == m) {
		cout << (sum-(96*size(S)));
	} else {
		cout << -1;
	}
	



	return 0;
}

