// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	string s; cin >> s;
	int count = 0;
	for (int i=0;i<n;i++){
		if (s[i] == '<') {
			count++;
			continue;
		}
		break;
	}
	for (int i=n-1;i>=0;i--) {
		if (s[i] == '>') {
			count++;
			continue;
		}
		break;
	}
	cout << count;


	return 0;

}
