// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	int n ; cin >> n;
	string s; cin >> s;
	for (int i=1;i<s.size();i++) {
		if (s[i] < s[i-1]) {
			s.replace(i-1,1,"");
			break;
		}
		if (i == s.size()-1) s.replace(i,1,"");
	}
	cout << s;

	return 0;	
}