// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	for (int i=0;i<n;i++) {
		string s , S; cin >> s >> S;
		int index = 0;
		for (int i=size(S)-1;i>=0;i--) {
			if (S[i] == '1') {
				index = size(S) - (i+1);
				break;
			}
		}
		for (int i=size(s)-1-index;i>=0;i--) {
			if (s[i] == '1') {
				index = size(s) - 1 - i - index;
				break;
			}
		}
		cout << index << '\n';
	}

	return 0;
}

