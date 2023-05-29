// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	int n; cin >> n;
	int letters = 0 , cane = 0 , star = 0;
	for (int i=0;i<s.size();i++) {
		if (s[i] == '?') {
			cane++;
		} else if (s[i] == '*') {
			star++;
		} else {
			letters++;
		}
	}
	bool ans = 1;
	if (letters-cane-star > n) ans = 0;
	if (letters < n && star == 0) ans = 0;

	if (ans == 0) {
		cout << "Impossible\n";
		return 0;
	}
	for (int i=0;i<s.size();i++) {
		if (s[i] == '?' || s[i] == '*') {
			if (letters > n) {
				s.replace(i-1,2,"");
				i--;
				letters--;
			} else if (letters == n || s[i] == '?') {
				s.replace(i,1,"");
			} else {
				string S = "";
				for (int j=0;j<n-letters;j++) S+=s[i-1];
				s = s.substr(0,i) + S + s.substr(i+1,s.size()-i);
				letters = n; 
			}
		}
	}

	cout << s << '\n';


	

	return 0;	
}