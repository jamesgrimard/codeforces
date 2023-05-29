// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	int cnt = 0;
	for (int i=1;i<s.size();i++) {
		if (s[i] == s[i-1]) {
			s.replace(i-1,2,"");
			i = max(0,i-2);
			cnt++;
		}
	}

	cnt % 2 == 0 ? cout << "No\n" : cout << "Yes\n";

	return 0;	
}