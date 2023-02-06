// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s ; cin >> s;

	int n; cin >> n;

	int a = (s[0]-'0')*10*60 + (s[1]-'0')*60;
	int b = (s[3]-'0')*10 + (s[4]-'0');
	
	a += b + n;

	if ((a/60) % 24 < 10) {
		cout << "0";
	}

	cout << ((a/60)%24) << ":";

	if (a % 60 < 10) {
		cout << "0";
	}
	cout << (a%60);

	return 0;
}

