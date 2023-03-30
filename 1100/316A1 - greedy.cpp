// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	string s; cin >> s;
	long long cnt = 1 , d = 0;
	map<int,int> m;
	for (int i=0;i<s.size();i++) {
		if ((s[i] - '0' > 9 || s[i] - '0' < 0) && s[i] != '?' && m[s[i]] == 0) {
			d++;
			cnt *= (10-(d - 1));
		}
		if (s[i] == '?') cnt *= 10;
		if (i == 0 && cnt == 10) cnt--;
		m[s[i]]++;
	}

	cout << cnt;

	return 0;
}