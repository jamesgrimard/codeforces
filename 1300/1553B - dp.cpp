// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
void myFunction(int i, string s, string S, int p, bool &f , bool q) {
	if (i+1 < s.size() && p+1 < S.size() && s[i+1] == S[p+1] && q != 1) myFunction(i+1,s,S,p+1,f,q);
	if (i-1 >= 0 && p+1 < S.size() && s[i-1] == S[p+1]) myFunction(i-1,s,S,p+1,f,1);
	if (p == S.size()-1) f = 1;
}



int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s,S;cin >> s >> S;
		bool f = 0;
		for (int i=0;i<s.size();i++) {
			if (s.size()-i+s.size() < S.size()) break;
			if (s[i] == S[0]) myFunction(i,s,S,0,f,0);
		}
		
		f == 1 ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;	
}