// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	int spaces = -2;
	vector<int> a;
	bool flag = 0;
	for (int i=0;i<size(s);i++) {
		if (s[i] == '<' && s[i+1] != '/') {
			if (flag == 1) {
				a.push_back(spaces);
			} else {
				spaces += 2;
				a.push_back(spaces);
			}
			flag = 0;
		} else if (s[i] == '<' && s[i+1] == '/') {
			(flag == 0) ? a.push_back(spaces) : a.push_back(spaces - 2);
			if (flag == 1) spaces -= 2;
			flag = 1;
		}
	}

	int cnt = 0;
	for (int i=0;i<size(s);i++) {
		if (s[i] == '<') {
			for (int j=0;j<a[cnt];j++) cout << " ";
			if (s[i+1] == '/') {
				cout << s.substr(i,4);
			} else {
				cout << s.substr(i,3);
			}
			cnt++;
			cout << '\n';
		}
	}
	

	return 0;
}



