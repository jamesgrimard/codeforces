// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;

	vector<string> a = {"Danil", "Olya", "Slava", "Ann", "Nikita"};

	int cnt = 0;

	for (int i=0;i<size(a);i++) {
		for (int k=0;k<size(s);k++) {
			if (a[i][0] != s[k]) continue;
			for (int j=0;j<size(a[i]);j++) {
				if (k+j > size(s)-1 || a[i][j] != s[k+j]) break;
				if (j == size(a[i])-1) cnt++;
			}
		}
	}

	(cnt == 1) ? cout << "YES\n" : cout << "NO\n";

	return 0;
		
}

