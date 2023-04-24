// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		int f1 = -1 , f2 = -1; 
		for (int i=n-1;i>=0;i--) {
			if (s[i] == '0' && f2 == -1) f2 = i;
			if (s[i] == '1' && f2 != -1) f1 = i;
		}
		if (f1 == -1 || f2 == -1) {
			cout << s << '\n';
		} else {
			s.replace(f1,f2-f1,"");
			cout << s << '\n';
		}
	} 

	return 0;
}