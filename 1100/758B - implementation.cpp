// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;

	vector<int> a(4);
	vector<char> c(4);
	vector<char> o = {'R','B','Y','G'};

	for (int i=0;i<size(s);i++) {
		if (s[i] != '!') c[i%4] = s[i];
		if (s[i] == '!') a[i%4]++;
	}

	for (int i=0;i<4;i++) {
		for (int j=0;j<4;j++) {
			if (c[j] == o[i]) {
				cout << a[j] << " ";
				break;
			}
		}
	}

	return 0;
}

